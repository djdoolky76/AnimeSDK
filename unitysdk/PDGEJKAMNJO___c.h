#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDGEJKAMNJO;
namespace System { class Object; }

#define PDGEJKAMNJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE1A20)
#define PDGEJKAMNJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE1A50)
#define PDGEJKAMNJO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DEE1A60)

inline static constexpr unsigned int PDGEJKAMNJO___c_TypeDefinitionIndex = 32411;

	class PDGEJKAMNJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDGEJKAMNJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGEJKAMNJO___C_CTOR_OFFSET))(this);
		}

		::PDGEJKAMNJO* __cctor_b__33_0()
		{
			return ((::PDGEJKAMNJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGEJKAMNJO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBBKABIIOJB;
namespace System { class Object; }

#define EBBKABIIOJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F511F40)
#define EBBKABIIOJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F511F80)
#define EBBKABIIOJB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F511F90)

inline static constexpr unsigned int EBBKABIIOJB___c_TypeDefinitionIndex = 29982;

	class EBBKABIIOJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBBKABIIOJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBKABIIOJB___C_CTOR_OFFSET))(this);
		}

		::EBBKABIIOJB* __cctor_b__33_0()
		{
			return ((::EBBKABIIOJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBKABIIOJB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

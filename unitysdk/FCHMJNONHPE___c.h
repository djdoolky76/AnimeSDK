#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCHMJNONHPE;
namespace System { class Object; }

#define FCHMJNONHPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E31AE90)
#define FCHMJNONHPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E31AEC0)
#define FCHMJNONHPE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E31AED0)

inline static constexpr unsigned int FCHMJNONHPE___c_TypeDefinitionIndex = 29737;

	class FCHMJNONHPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x511D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCHMJNONHPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHMJNONHPE___C_CTOR_OFFSET))(this);
		}

		::FCHMJNONHPE* __cctor_b__28_0()
		{
			return ((::FCHMJNONHPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHMJNONHPE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

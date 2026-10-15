#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFPCLMDMEME;
namespace System { class Object; }

#define HFPCLMDMEME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E545180)
#define HFPCLMDMEME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5451C0)
#define HFPCLMDMEME___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5451D0)

inline static constexpr unsigned int HFPCLMDMEME___c_TypeDefinitionIndex = 33528;

	class HFPCLMDMEME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFPCLMDMEME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPCLMDMEME___C_CTOR_OFFSET))(this);
		}

		::HFPCLMDMEME* __cctor_b__28_0()
		{
			return ((::HFPCLMDMEME*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPCLMDMEME___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

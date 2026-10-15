#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCEEHNOJAAN;
namespace System { class Object; }

#define FCEEHNOJAAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E316800)
#define FCEEHNOJAAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E316840)
#define FCEEHNOJAAN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E316850)

inline static constexpr unsigned int FCEEHNOJAAN___c_TypeDefinitionIndex = 28063;

	class FCEEHNOJAAN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCEEHNOJAAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEEHNOJAAN___C_CTOR_OFFSET))(this);
		}

		::FCEEHNOJAAN* __cctor_b__28_0()
		{
			return ((::FCEEHNOJAAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEEHNOJAAN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

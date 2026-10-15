#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJJKHFPLLIF;
namespace System { class Object; }

#define IJJKHFPLLIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E668C80)
#define IJJKHFPLLIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E668CC0)
#define IJJKHFPLLIF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E668CD0)

inline static constexpr unsigned int IJJKHFPLLIF___c_TypeDefinitionIndex = 25693;

	class IJJKHFPLLIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJJKHFPLLIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJKHFPLLIF___C_CTOR_OFFSET))(this);
		}

		::IJJKHFPLLIF* __cctor_b__33_0()
		{
			return ((::IJJKHFPLLIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJKHFPLLIF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

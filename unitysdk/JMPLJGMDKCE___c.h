#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMPLJGMDKCE;
namespace System { class Object; }

#define JMPLJGMDKCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E791650)
#define JMPLJGMDKCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E791690)
#define JMPLJGMDKCE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7916A0)

inline static constexpr unsigned int JMPLJGMDKCE___c_TypeDefinitionIndex = 34336;

	class JMPLJGMDKCE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPLJGMDKCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLJGMDKCE___C_CTOR_OFFSET))(this);
		}

		::JMPLJGMDKCE* __cctor_b__23_0()
		{
			return ((::JMPLJGMDKCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPLJGMDKCE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

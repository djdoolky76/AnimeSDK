#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKGFMPCFOOK;
namespace System { class Object; }

#define AKGFMPCFOOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3CB320)
#define AKGFMPCFOOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CB360)
#define AKGFMPCFOOK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3CB370)

inline static constexpr unsigned int AKGFMPCFOOK___c_TypeDefinitionIndex = 34951;

	class AKGFMPCFOOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGFMPCFOOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGFMPCFOOK___C_CTOR_OFFSET))(this);
		}

		::AKGFMPCFOOK* __cctor_b__28_0()
		{
			return ((::AKGFMPCFOOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGFMPCFOOK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

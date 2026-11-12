#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKGFMPCFOOK;
namespace System { class Object; }

#define AKGFMPCFOOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6887F0)
#define AKGFMPCFOOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F688830)
#define AKGFMPCFOOK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F688840)

inline static constexpr unsigned int AKGFMPCFOOK___c_TypeDefinitionIndex = 35879;

	class AKGFMPCFOOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DBE0);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKHMHNOIGAB;
namespace System { class Object; }

#define IKHMHNOIGAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20067B80)
#define IKHMHNOIGAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20067BC0)
#define IKHMHNOIGAB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20067BD0)

inline static constexpr unsigned int IKHMHNOIGAB___c_TypeDefinitionIndex = 33778;

	class IKHMHNOIGAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKHMHNOIGAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHMHNOIGAB___C_CTOR_OFFSET))(this);
		}

		::IKHMHNOIGAB* __cctor_b__23_0()
		{
			return ((::IKHMHNOIGAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHMHNOIGAB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

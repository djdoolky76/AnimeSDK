#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLBMKOILIDN;
namespace System { class Object; }

#define LLBMKOILIDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF42CC0)
#define LLBMKOILIDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF42CF0)
#define LLBMKOILIDN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FF42D00)

inline static constexpr unsigned int LLBMKOILIDN___c_TypeDefinitionIndex = 30488;

	class LLBMKOILIDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLBMKOILIDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBMKOILIDN___C_CTOR_OFFSET))(this);
		}

		::LLBMKOILIDN* __cctor_b__23_0()
		{
			return ((::LLBMKOILIDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBMKOILIDN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

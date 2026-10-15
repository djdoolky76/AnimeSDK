#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGGOCLKIAME;
namespace System { class Object; }

#define EGGOCLKIAME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E266B90)
#define EGGOCLKIAME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E266BD0)
#define EGGOCLKIAME___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E266BE0)

inline static constexpr unsigned int EGGOCLKIAME___c_TypeDefinitionIndex = 32574;

	class EGGOCLKIAME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGGOCLKIAME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME___C_CTOR_OFFSET))(this);
		}

		::EGGOCLKIAME* __cctor_b__23_0()
		{
			return ((::EGGOCLKIAME*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGOCLKIAME___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

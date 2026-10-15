#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKBJONMNLCH;
namespace System { class Object; }

#define MKBJONMNLCH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA23BB0)
#define MKBJONMNLCH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA23BF0)
#define MKBJONMNLCH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA23C00)

inline static constexpr unsigned int MKBJONMNLCH___c_TypeDefinitionIndex = 32775;

	class MKBJONMNLCH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKBJONMNLCH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBJONMNLCH___C_CTOR_OFFSET))(this);
		}

		::MKBJONMNLCH* __cctor_b__18_0()
		{
			return ((::MKBJONMNLCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBJONMNLCH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

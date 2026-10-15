#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABDOKOFEHMH;
namespace System { class Object; }

#define ABDOKOFEHMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD9B710)
#define ABDOKOFEHMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD9B740)
#define ABDOKOFEHMH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DD9B750)

inline static constexpr unsigned int ABDOKOFEHMH___c_TypeDefinitionIndex = 25458;

	class ABDOKOFEHMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABDOKOFEHMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDOKOFEHMH___C_CTOR_OFFSET))(this);
		}

		::ABDOKOFEHMH* __cctor_b__23_0()
		{
			return ((::ABDOKOFEHMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDOKOFEHMH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

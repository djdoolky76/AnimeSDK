#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABDOKOFEHMH;
namespace System { class Object; }

#define ABDOKOFEHMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20319030)
#define ABDOKOFEHMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20319060)
#define ABDOKOFEHMH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20319070)

inline static constexpr unsigned int ABDOKOFEHMH___c_TypeDefinitionIndex = 25937;

	class ABDOKOFEHMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34220);
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

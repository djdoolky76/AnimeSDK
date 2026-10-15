#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEDJDBAJGHH;
namespace System { class Object; }

#define AEDJDBAJGHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBCE10)
#define AEDJDBAJGHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBCE50)
#define AEDJDBAJGHH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DDBCE60)

inline static constexpr unsigned int AEDJDBAJGHH___c_TypeDefinitionIndex = 27533;

	class AEDJDBAJGHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEDJDBAJGHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJDBAJGHH___C_CTOR_OFFSET))(this);
		}

		::AEDJDBAJGHH* __cctor_b__18_0()
		{
			return ((::AEDJDBAJGHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJDBAJGHH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEGDBKDLJDJ;
namespace System { class Object; }

#define PEGDBKDLJDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEEB0A0)
#define PEGDBKDLJDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEB0E0)
#define PEGDBKDLJDJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEEB0F0)

inline static constexpr unsigned int PEGDBKDLJDJ___c_TypeDefinitionIndex = 27718;

	class PEGDBKDLJDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEGDBKDLJDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ___C_CTOR_OFFSET))(this);
		}

		::PEGDBKDLJDJ* __cctor_b__23_0()
		{
			return ((::PEGDBKDLJDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDBKDLJDJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

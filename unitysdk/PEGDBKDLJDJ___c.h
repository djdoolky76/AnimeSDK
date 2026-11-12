#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEGDBKDLJDJ;
namespace System { class Object; }

#define PEGDBKDLJDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1E4A90)
#define PEGDBKDLJDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1E4AD0)
#define PEGDBKDLJDJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F1E4AE0)

inline static constexpr unsigned int PEGDBKDLJDJ___c_TypeDefinitionIndex = 28249;

	class PEGDBKDLJDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x302F0);
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

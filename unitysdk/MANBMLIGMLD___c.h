#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MANBMLIGMLD;
namespace System { class Object; }

#define MANBMLIGMLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBB7D20)
#define MANBMLIGMLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB7D60)
#define MANBMLIGMLD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FBB7D70)

inline static constexpr unsigned int MANBMLIGMLD___c_TypeDefinitionIndex = 35897;

	class MANBMLIGMLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x497B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MANBMLIGMLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANBMLIGMLD___C_CTOR_OFFSET))(this);
		}

		::MANBMLIGMLD* __cctor_b__23_0()
		{
			return ((::MANBMLIGMLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANBMLIGMLD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

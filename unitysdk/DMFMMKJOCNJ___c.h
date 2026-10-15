#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMFMMKJOCNJ;
namespace System { class Object; }

#define DMFMMKJOCNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BF6D0)
#define DMFMMKJOCNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BF710)
#define DMFMMKJOCNJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1BF720)

inline static constexpr unsigned int DMFMMKJOCNJ___c_TypeDefinitionIndex = 34767;

	class DMFMMKJOCNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x362F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMFMMKJOCNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ___C_CTOR_OFFSET))(this);
		}

		::DMFMMKJOCNJ* __cctor_b__23_0()
		{
			return ((::DMFMMKJOCNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

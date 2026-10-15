#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOFGKMONJHJ;
namespace System { class Object; }

#define FOFGKMONJHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FAE60)
#define FOFGKMONJHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FAEA0)
#define FOFGKMONJHJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3FAEB0)

inline static constexpr unsigned int FOFGKMONJHJ___c_TypeDefinitionIndex = 27728;

	class FOFGKMONJHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOFGKMONJHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFGKMONJHJ___C_CTOR_OFFSET))(this);
		}

		::FOFGKMONJHJ* __cctor_b__23_0()
		{
			return ((::FOFGKMONJHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFGKMONJHJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

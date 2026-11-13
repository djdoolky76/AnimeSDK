#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPIHBHLJOJD;
namespace System { class Object; }

#define EPIHBHLJOJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7345F0)
#define EPIHBHLJOJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F734630)
#define EPIHBHLJOJD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F734640)

inline static constexpr unsigned int EPIHBHLJOJD___c_TypeDefinitionIndex = 32087;

	class EPIHBHLJOJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPIHBHLJOJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIHBHLJOJD___C_CTOR_OFFSET))(this);
		}

		::EPIHBHLJOJD* __cctor_b__28_0()
		{
			return ((::EPIHBHLJOJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIHBHLJOJD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

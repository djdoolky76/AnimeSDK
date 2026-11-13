#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBPJGCJEGJB;
namespace System { class Object; }

#define MBPJGCJEGJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD39B50)
#define MBPJGCJEGJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD39B90)
#define MBPJGCJEGJB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD39BA0)

inline static constexpr unsigned int MBPJGCJEGJB___c_TypeDefinitionIndex = 33806;

	class MBPJGCJEGJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBPJGCJEGJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPJGCJEGJB___C_CTOR_OFFSET))(this);
		}

		::MBPJGCJEGJB* __cctor_b__28_0()
		{
			return ((::MBPJGCJEGJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPJGCJEGJB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

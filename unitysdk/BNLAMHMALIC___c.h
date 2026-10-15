#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLAMHMALIC;
namespace System { class Object; }

#define BNLAMHMALIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E00AC10)
#define BNLAMHMALIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E00AC50)
#define BNLAMHMALIC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E00AC60)

inline static constexpr unsigned int BNLAMHMALIC___c_TypeDefinitionIndex = 33997;

	class BNLAMHMALIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DC80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNLAMHMALIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLAMHMALIC___C_CTOR_OFFSET))(this);
		}

		::BNLAMHMALIC* __cctor_b__23_0()
		{
			return ((::BNLAMHMALIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLAMHMALIC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

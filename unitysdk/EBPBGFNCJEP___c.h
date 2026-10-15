#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBPBGFNCJEP;
namespace System { class Object; }

#define EBPBGFNCJEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E21B930)
#define EBPBGFNCJEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E21B970)
#define EBPBGFNCJEP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E21B980)

inline static constexpr unsigned int EBPBGFNCJEP___c_TypeDefinitionIndex = 30211;

	class EBPBGFNCJEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x424C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBPBGFNCJEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPBGFNCJEP___C_CTOR_OFFSET))(this);
		}

		::EBPBGFNCJEP* __cctor_b__28_0()
		{
			return ((::EBPBGFNCJEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPBGFNCJEP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

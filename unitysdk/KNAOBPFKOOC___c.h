#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define KNAOBPFKOOC___C_ALOGMPAEBCE_OFFSET UNITYSDK_OFFSET(0x1EA307A0)
#define KNAOBPFKOOC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA30750)
#define KNAOBPFKOOC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA30790)

inline static constexpr unsigned int KNAOBPFKOOC___c_TypeDefinitionIndex = 8382;

class KNAOBPFKOOC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KNAOBPFKOOC___c_TypeDefinitionIndex)->GetStaticField(0x7400);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__21_1()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(KNAOBPFKOOC___c_TypeDefinitionIndex)->GetStaticField(0x7408);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNAOBPFKOOC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAOBPFKOOC___C__CTOR_OFFSET))(this);
	}

	::System::Void ALOGMPAEBCE(::System::Exception* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + KNAOBPFKOOC___C_ALOGMPAEBCE_OFFSET))(this, BLLNHDIDKPA);
	}
};

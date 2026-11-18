#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CGFKIGHBDIM;
namespace MoleMole { class UIBaseController; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class Transform; }

#define IFGKFMHPANI___C_EKPFOJFEJPM_OFFSET UNITYSDK_OFFSET(0x16572270)
#define IFGKFMHPANI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16572220)
#define IFGKFMHPANI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16572260)

inline static constexpr unsigned int IFGKFMHPANI___c_TypeDefinitionIndex = 70772;

class IFGKFMHPANI___c : public ::System::Object
{
public:
	static ::System::Func_3<::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::CGFKIGHBDIM*>** StaticGet___9__9_0()
	{
		return (::System::Func_3<::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::CGFKIGHBDIM*>**)Il2CppClass::FromTypeDefinitionIndex(IFGKFMHPANI___c_TypeDefinitionIndex)->GetStaticField(0x50900);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IFGKFMHPANI___c_TypeDefinitionIndex)->GetStaticField(0x50908);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFGKFMHPANI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGKFMHPANI___C__CTOR_OFFSET))(this);
	}

	::CGFKIGHBDIM* EKPFOJFEJPM(::MoleMole::UIBaseController* JOLDOMEIKEF, ::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::CGFKIGHBDIM*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IFGKFMHPANI___C_EKPFOJFEJPM_OFFSET))(this, JOLDOMEIKEF, IAPKABMDJNF);
	}
};

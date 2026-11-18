#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CFNOOGNJNJF_AGMACCFJHGL_OFFSET UNITYSDK_OFFSET(0x1454F4E0)
#define CFNOOGNJNJF_HEBELIGNFNH_OFFSET UNITYSDK_OFFSET(0x1454F300)
#define CFNOOGNJNJF_INLIJEDONNM_OFFSET UNITYSDK_OFFSET(0x1454F210)
#define CFNOOGNJNJF_JNBGBKMJGAG_OFFSET UNITYSDK_OFFSET(0x1454F340)
#define CFNOOGNJNJF_PAJNCNHJDKM_OFFSET UNITYSDK_OFFSET(0x1454F430)
#define CFNOOGNJNJF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1454F1C0)

inline static constexpr unsigned int CFNOOGNJNJF_TypeDefinitionIndex = 78340;

class CFNOOGNJNJF : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_NKGMPOMOIFF()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CFNOOGNJNJF_TypeDefinitionIndex)->GetStaticField(0x500A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFNOOGNJNJF__CCTOR_OFFSET))();
	}

	static ::System::Void INLIJEDONNM(::System::Int32 MAEHALJGINN)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CFNOOGNJNJF_INLIJEDONNM_OFFSET))(MAEHALJGINN);
	}

	static ::System::Void JNBGBKMJGAG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFNOOGNJNJF_JNBGBKMJGAG_OFFSET))();
	}

	static ::System::Boolean PAJNCNHJDKM(::System::Int32 MAEHALJGINN)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CFNOOGNJNJF_PAJNCNHJDKM_OFFSET))(MAEHALJGINN);
	}

	static ::System::Void AGMACCFJHGL(::System::Collections::Generic::IEnumerable_1<::System::Int32>* NAOHPHIFEKE)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CFNOOGNJNJF_AGMACCFJHGL_OFFSET))(NAOHPHIFEKE);
	}

	static ::System::Void HEBELIGNFNH(::System::Int32 MAEHALJGINN)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CFNOOGNJNJF_HEBELIGNFNH_OFFSET))(MAEHALJGINN);
	}
};

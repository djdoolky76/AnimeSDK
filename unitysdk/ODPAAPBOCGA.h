#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace Entitas { template <typename T> class IGroup_1; }

#define ODPAAPBOCGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7CC170)
#define ODPAAPBOCGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C7CC230)
#define ODPAAPBOCGA_GET_AOEGROUP_OFFSET UNITYSDK_OFFSET(0x1C7CC280)
#define ODPAAPBOCGA_SET_AOEGROUP_OFFSET UNITYSDK_OFFSET(0x1C7CC290)

inline static constexpr unsigned int ODPAAPBOCGA_TypeDefinitionIndex = 37277;

	class ODPAAPBOCGA : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::IFBFJDCECML*>* _AoeGroup_k__BackingField; // 0x10
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + ODPAAPBOCGA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPAAPBOCGA_DISPOSE_OFFSET))(this);
		}

		::Entitas::IGroup_1<::IFBFJDCECML*>* get_AoeGroup()
		{
			return ((::Entitas::IGroup_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODPAAPBOCGA_GET_AOEGROUP_OFFSET))(this);
		}

		::System::Void set_AoeGroup(::Entitas::IGroup_1<::IFBFJDCECML*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::IFBFJDCECML*>*))((::PBYTE)hIl2Cpp + ODPAAPBOCGA_SET_AOEGROUP_OFFSET))(this, a1);
		}

	};

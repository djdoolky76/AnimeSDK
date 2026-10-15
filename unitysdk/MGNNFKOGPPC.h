#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIFBFGDGJK;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace Entitas { template <typename T> class IGroup_1; }

#define MGNNFKOGPPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71E290)
#define MGNNFKOGPPC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C71E350)

inline static constexpr unsigned int MGNNFKOGPPC_TypeDefinitionIndex = 37448;

	class MGNNFKOGPPC : public ::System::Object
	{
	public:
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x10
		::Entitas::IGroup_1<::IFBFJDCECML*>* JPKEBGGDFPL; // 0x18
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::GMIFBFGDGJK* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GMIFBFGDGJK*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + MGNNFKOGPPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNNFKOGPPC_EXECUTE_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelLeaveNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJCFBPDOHEF_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA5760)
#define OJCFBPDOHEF_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xBEA56C0)

inline static constexpr unsigned int OJCFBPDOHEF_TypeDefinitionIndex = 77682;

	class OJCFBPDOHEF : public ::HBLDGJCDJPF
	{
	public:
		::RPG::GameCore::ChimeraDuelLeaveNode* EABKOHGCHFP; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCFBPDOHEF_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + OJCFBPDOHEF_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};

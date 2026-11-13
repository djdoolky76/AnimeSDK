#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelFireEffectNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALOGEFGNAAP_CTOR_OFFSET UNITYSDK_OFFSET(0x197CC7E0)
#define ALOGEFGNAAP_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0x197CC740)

inline static constexpr unsigned int ALOGEFGNAAP_TypeDefinitionIndex = 80414;

	class ALOGEFGNAAP : public ::HBLDGJCDJPF
	{
	public:
		::RPG::GameCore::ChimeraDuelFireEffectNode* EABKOHGCHFP; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOGEFGNAAP_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + ALOGEFGNAAP_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};

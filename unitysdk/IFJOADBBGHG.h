#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJLCPMDGIBO;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFJOADBBGHG_ALFAOMCCAFC_OFFSET UNITYSDK_OFFSET(0x15F12C00)
#define IFJOADBBGHG_CAMMAKPPIIC_OFFSET UNITYSDK_OFFSET(0x15F12A70)
#define IFJOADBBGHG_CBMBGNCFLJA_OFFSET UNITYSDK_OFFSET(0x15F12110)
#define IFJOADBBGHG_CTOR_OFFSET UNITYSDK_OFFSET(0x15F120A0)
#define IFJOADBBGHG_IABODAAEEMI_OFFSET UNITYSDK_OFFSET(0x15F125A0)
#define IFJOADBBGHG_KFDEJDCCAMJ_OFFSET UNITYSDK_OFFSET(0x15F12AE0)
#define IFJOADBBGHG_MFKCJIPCEPJ_OFFSET UNITYSDK_OFFSET(0x15F120B0)

inline static constexpr unsigned int IFJOADBBGHG_TypeDefinitionIndex = 62501;

	class IFJOADBBGHG : public ::System::Object
	{
	public:
		::System::Action_1<::CJLCPMDGIBO*>* AJLBGIPLGPF; // 0x10
		::CJLCPMDGIBO* CNPMNHGHKFG; // 0x18
		::System::Void _ctor(::System::Action_1<::CJLCPMDGIBO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::CJLCPMDGIBO*>*))((::PBYTE)hIl2Cpp + IFJOADBBGHG_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MFKCJIPCEPJ(::CJLCPMDGIBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJLCPMDGIBO*))((::PBYTE)hIl2Cpp + IFJOADBBGHG_MFKCJIPCEPJ_OFFSET))(this, a1);
		}

		::System::Void IABODAAEEMI(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IFJOADBBGHG_IABODAAEEMI_OFFSET))(this, a1);
		}

		::System::Boolean CAMMAKPPIIC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFJOADBBGHG_CAMMAKPPIIC_OFFSET))(this, a1);
		}

		::System::Void KFDEJDCCAMJ(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IFJOADBBGHG_KFDEJDCCAMJ_OFFSET))(this, a1);
		}

		::CJLCPMDGIBO* ALFAOMCCAFC()
		{
			return ((::CJLCPMDGIBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJOADBBGHG_ALFAOMCCAFC_OFFSET))(this);
		}

		::System::Boolean CBMBGNCFLJA(::CJLCPMDGIBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJLCPMDGIBO*))((::PBYTE)hIl2Cpp + IFJOADBBGHG_CBMBGNCFLJA_OFFSET))(this, a1);
		}

	};

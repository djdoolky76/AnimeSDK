#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class IGroup_1; }

#define BPPHFLLDFGA_CTOR_OFFSET UNITYSDK_OFFSET(0xC1AE0B0)
#define BPPHFLLDFGA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC1AE4B0)
#define BPPHFLLDFGA_IBGEOKDLINC_OFFSET UNITYSDK_OFFSET(0xC1AE970)
#define BPPHFLLDFGA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC1AE3A0)
#define BPPHFLLDFGA_KOOHLKMDHHA_OFFSET UNITYSDK_OFFSET(0xC1AECD0)
#define BPPHFLLDFGA_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0xC1AE780)
#define BPPHFLLDFGA_MHLOCEJHDJC_OFFSET UNITYSDK_OFFSET(0xC1AE500)
#define BPPHFLLDFGA_OGBJLFEKPCH_OFFSET UNITYSDK_OFFSET(0xC1AE7E0)
#define BPPHFLLDFGA_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xC1AEBB0)

inline static constexpr unsigned int BPPHFLLDFGA_TypeDefinitionIndex = 76949;

	class BPPHFLLDFGA : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::Entitas::IGroup_1<::HIOEAKHGILF*>* ENDGPFOHHDF; // 0x20
		::Entitas::IGroup_1<::HIOEAKHGILF*>* PCLEPNJNFOB; // 0x28
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + BPPHFLLDFGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPHFLLDFGA_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPHFLLDFGA_EXECUTE_OFFSET))(this);
		}

		::System::Void LateExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPHFLLDFGA_LATEEXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPHFLLDFGA_TEARDOWN_OFFSET))(this);
		}

		::System::Void KOOHLKMDHHA(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + BPPHFLLDFGA_KOOHLKMDHHA_OFFSET))(this, a1, a2);
		}

		::System::Void MHLOCEJHDJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPHFLLDFGA_MHLOCEJHDJC_OFFSET))(this);
		}

		::System::Void OGBJLFEKPCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPHFLLDFGA_OGBJLFEKPCH_OFFSET))(this);
		}

		::System::Void IBGEOKDLINC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPHFLLDFGA_IBGEOKDLINC_OFFSET))(this);
		}

	};

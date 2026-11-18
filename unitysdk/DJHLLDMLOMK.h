#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHFDEBPOBOG.h"
#include "unitysdk/System/Object.h"

class EOMFFBGMKBF;
class IANDOOLAALI;
class OHBPGBFLIAE;
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Net::Sockets { class Socket; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define DJHLLDMLOMK_APPJMKMDNNC_OFFSET UNITYSDK_OFFSET(0x148ABDB0)
#define DJHLLDMLOMK_DKDJHJKJDGL_OFFSET UNITYSDK_OFFSET(0x148ABE30)
#define DJHLLDMLOMK_HADEPEEANED_OFFSET UNITYSDK_OFFSET(0x148AC410)
#define DJHLLDMLOMK_JACOPHGKFNK_OFFSET UNITYSDK_OFFSET(0x148ABBD0)
#define DJHLLDMLOMK_MEPNDLOBKBM_OFFSET UNITYSDK_OFFSET(0x148AC7E0)
#define DJHLLDMLOMK_PIFNAMMPOOE_OFFSET UNITYSDK_OFFSET(0x148AC550)
#define DJHLLDMLOMK_PKPKPEMCIGL_OFFSET UNITYSDK_OFFSET(0x148ABC20)
#define DJHLLDMLOMK__CTOR_OFFSET UNITYSDK_OFFSET(0x148ABAC0)

inline static constexpr unsigned int DJHLLDMLOMK_TypeDefinitionIndex = 58888;

class DJHLLDMLOMK : public ::System::Object
{
public:
	::System::Net::Sockets::Socket* CONADEBAINF; // 0x10
	::System::Collections::Generic::Queue_1<::System::Object*>* OFNGFJOLEFC; // 0x18
	::OHBPGBFLIAE* PFACHENHPFG; // 0x20
	::EOMFFBGMKBF* EPPNPDOJFNH; // 0x28
	::System::Boolean ANAKBINKBID; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHLLDMLOMK__CTOR_OFFSET))(this);
	}

	::System::Void JACOPHGKFNK(::System::Net::Sockets::Socket* HIKAIBPJFDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + DJHLLDMLOMK_JACOPHGKFNK_OFFSET))(this, HIKAIBPJFDH);
	}

	::System::Void PKPKPEMCIGL(::IANDOOLAALI* NAPFALLANDL, ::System::Action_2<::System::Int32, ::System::Exception*>* HKEBHFKHBCC)
	{
		return ((::System::Void(*)(::PVOID, ::IANDOOLAALI*, ::System::Action_2<::System::Int32, ::System::Exception*>*))((::PBYTE)hIl2Cpp + DJHLLDMLOMK_PKPKPEMCIGL_OFFSET))(this, NAPFALLANDL, HKEBHFKHBCC);
	}

	::System::Void APPJMKMDNNC(::HHFDEBPOBOG ILJNMDLHDON)
	{
		return ((::System::Void(*)(::PVOID, ::HHFDEBPOBOG))((::PBYTE)hIl2Cpp + DJHLLDMLOMK_APPJMKMDNNC_OFFSET))(this, ILJNMDLHDON);
	}

	::System::Void DKDJHJKJDGL(::System::Object* HEAJMIGHEHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJHLLDMLOMK_DKDJHJKJDGL_OFFSET))(this, HEAJMIGHEHG);
	}

	::System::Void HADEPEEANED(::IANDOOLAALI* NAPFALLANDL, ::System::Action_1<::System::Int32>* DIOMMCOEAMP)
	{
		return ((::System::Void(*)(::PVOID, ::IANDOOLAALI*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DJHLLDMLOMK_HADEPEEANED_OFFSET))(this, NAPFALLANDL, DIOMMCOEAMP);
	}

	::System::Void PIFNAMMPOOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHLLDMLOMK_PIFNAMMPOOE_OFFSET))(this);
	}

	::System::Threading::Tasks::Task_1<::System::Int32>* MEPNDLOBKBM(::System::Net::Sockets::Socket* CONADEBAINF, ::EOMFFBGMKBF* PCPCLPGMMEM)
	{
		return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Net::Sockets::Socket*, ::EOMFFBGMKBF*))((::PBYTE)hIl2Cpp + DJHLLDMLOMK_MEPNDLOBKBM_OFFSET))(this, CONADEBAINF, PCPCLPGMMEM);
	}
};

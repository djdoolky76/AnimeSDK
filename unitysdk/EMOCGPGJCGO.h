#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBFPIDMKFCB;
class JBOFFBEGNKB;
class JCIGBOPHKHF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EMOCGPGJCGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C522680)
#define EMOCGPGJCGO_DHOCMMBBDIM_OFFSET UNITYSDK_OFFSET(0x1C5227F0)
#define EMOCGPGJCGO_JDLENDNKCED_OFFSET UNITYSDK_OFFSET(0x1C522690)

inline static constexpr unsigned int EMOCGPGJCGO_TypeDefinitionIndex = 41871;

	class EMOCGPGJCGO : public ::System::Object
	{
	public:
		::JBOFFBEGNKB* FPNMIGDJBIE; // 0x10
		::System::Void _ctor(::JBOFFBEGNKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBOFFBEGNKB*))((::PBYTE)hIl2Cpp + EMOCGPGJCGO_CTOR_OFFSET))(this, a1);
		}

		::JCIGBOPHKHF* JDLENDNKCED(::System::UInt32 a1)
		{
			return ((::JCIGBOPHKHF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMOCGPGJCGO_JDLENDNKCED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::IBFPIDMKFCB*>* DHOCMMBBDIM(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::IBFPIDMKFCB*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + EMOCGPGJCGO_DHOCMMBBDIM_OFFSET))(this, a1);
		}

	};

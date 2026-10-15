#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHDBFLFJFGH;
class FDPFMFINJCO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryReader; }

#define MGFLCFNCDMI_CLEAR_OFFSET UNITYSDK_OFFSET(0xB912850)
#define MGFLCFNCDMI_CTOR_OFFSET UNITYSDK_OFFSET(0xB914C30)
#define MGFLCFNCDMI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB912890)
#define MGFLCFNCDMI_JKCINKCFJOH_OFFSET UNITYSDK_OFFSET(0xB913E00)
#define MGFLCFNCDMI_JMMJFPACENF_OFFSET UNITYSDK_OFFSET(0xB914830)
#define MGFLCFNCDMI_MFGCEMPNALG_OFFSET UNITYSDK_OFFSET(0xB914030)
#define MGFLCFNCDMI_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0xB912900)
#define MGFLCFNCDMI_PFNDOIILPNL_OFFSET UNITYSDK_OFFSET(0xB913BD0)

inline static constexpr unsigned int MGFLCFNCDMI_TypeDefinitionIndex = 67563;

	class MGFLCFNCDMI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFLCFNCDMI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFLCFNCDMI_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFLCFNCDMI_DISPOSE_OFFSET))(this);
		}

		::CHDBFLFJFGH* NJKHGPCDAMI(::System::String* a1)
		{
			return ((::CHDBFLFJFGH*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MGFLCFNCDMI_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void PFNDOIILPNL(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::IO::BinaryReader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + MGFLCFNCDMI_PFNDOIILPNL_OFFSET))(this, a1, a2);
		}

		::System::Void JKCINKCFJOH(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::IO::BinaryReader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + MGFLCFNCDMI_JKCINKCFJOH_OFFSET))(this, a1, a2);
		}

		::System::Void MFGCEMPNALG(::System::Collections::Generic::List_1<::FDPFMFINJCO*>* a1, ::System::IO::BinaryReader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FDPFMFINJCO*>*, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + MGFLCFNCDMI_MFGCEMPNALG_OFFSET))(this, a1, a2);
		}

		::FDPFMFINJCO* JMMJFPACENF(::System::IO::BinaryReader* a1)
		{
			return ((::FDPFMFINJCO*(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + MGFLCFNCDMI_JMMJFPACENF_OFFSET))(this, a1);
		}

	};

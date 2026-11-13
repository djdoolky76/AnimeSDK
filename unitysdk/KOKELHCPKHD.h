#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCILMJOBEAD.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define KOKELHCPKHD_CPIAHJDKMGI_OFFSET UNITYSDK_OFFSET(0x1910A750)
#define KOKELHCPKHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1910A840)
#define KOKELHCPKHD_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0x1910A310)
#define KOKELHCPKHD_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1910A210)
#define KOKELHCPKHD_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1910A370)
#define KOKELHCPKHD_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x1910A5C0)
#define KOKELHCPKHD_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x1910A260)

inline static constexpr unsigned int KOKELHCPKHD_TypeDefinitionIndex = 65866;

	class KOKELHCPKHD : public ::BCILMJOBEAD
	{
	public:
		::System::UInt32 GIIELBLKFBN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKELHCPKHD_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + KOKELHCPKHD_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKELHCPKHD_UPDATESTART_OFFSET))(this);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KOKELHCPKHD_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKELHCPKHD_UPDATEDONE_OFFSET))(this);
		}

		::System::Boolean CPIAHJDKMGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKELHCPKHD_CPIAHJDKMGI_OFFSET))(this);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKELHCPKHD_FDAFLPCLCEJ_OFFSET))(this);
		}

	};

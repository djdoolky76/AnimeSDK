#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCILMJOBEAD.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace RPG::Client { class GridFightPrayQuest; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DMMNKCGDCDI_OLCLCCGIGAH_BPENBBEJENF_OFFSET UNITYSDK_OFFSET(0xFEC6D80)
#define DMMNKCGDCDI_OLCLCCGIGAH_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC7920)
#define DMMNKCGDCDI_OLCLCCGIGAH_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0xFEC72D0)
#define DMMNKCGDCDI_OLCLCCGIGAH_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xFEC65F0)
#define DMMNKCGDCDI_OLCLCCGIGAH_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xFEC7350)
#define DMMNKCGDCDI_OLCLCCGIGAH_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xFEC6640)

inline static constexpr unsigned int DMMNKCGDCDI_OLCLCCGIGAH_TypeDefinitionIndex = 65094;

	class DMMNKCGDCDI_OLCLCCGIGAH : public ::BCILMJOBEAD
	{
	public:
		::RPG::Client::GridFightPrayQuest* FIBOEKFNHNO; // 0x18
		::System::Collections::Generic::IList_1<::System::UInt32>* LOMLIJKOGGN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMNKCGDCDI_OLCLCCGIGAH_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + DMMNKCGDCDI_OLCLCCGIGAH_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DMMNKCGDCDI_OLCLCCGIGAH_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + DMMNKCGDCDI_OLCLCCGIGAH_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMNKCGDCDI_OLCLCCGIGAH_FDAFLPCLCEJ_OFFSET))(this);
		}

		static ::System::Boolean BPENBBEJENF(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DMMNKCGDCDI_OLCLCCGIGAH_BPENBBEJENF_OFFSET))(a1, a2);
		}

	};

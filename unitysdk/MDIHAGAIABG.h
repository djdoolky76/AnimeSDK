#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class CheckMainMissionFinishedInCurrentVersion; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define MDIHAGAIABG_CPPDMMMIOKK_OFFSET UNITYSDK_OFFSET(0xB8A4550)
#define MDIHAGAIABG_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A3CA0)
#define MDIHAGAIABG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8A3ED0)
#define MDIHAGAIABG_GKNMFMCEOIE_OFFSET UNITYSDK_OFFSET(0xB8A4310)
#define MDIHAGAIABG_HKBFABGNOMA_OFFSET UNITYSDK_OFFSET(0xB8A4DF0)
#define MDIHAGAIABG_MOOAGPDEGPJ_OFFSET UNITYSDK_OFFSET(0xB8A49A0)
#define MDIHAGAIABG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8A4150)
#define MDIHAGAIABG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8A4040)
#define MDIHAGAIABG_TICK_OFFSET UNITYSDK_OFFSET(0xB8A40F0)

inline static constexpr unsigned int MDIHAGAIABG_TypeDefinitionIndex = 52644;

	class MDIHAGAIABG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* NFHMIBMNKPJ; // 0x20
		::KFELGAIGHAP* OCJLKFBFBDP; // 0x28
		::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion* OFKGLJOAMLD; // 0x30
		::System::UInt32 DOANFEPKNKG; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion*))((::PBYTE)hIl2Cpp + MDIHAGAIABG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIHAGAIABG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDIHAGAIABG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIHAGAIABG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIHAGAIABG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void GKNMFMCEOIE(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + MDIHAGAIABG_GKNMFMCEOIE_OFFSET))(this, a1, a2);
		}

		::System::Boolean CPPDMMMIOKK(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MDIHAGAIABG_CPPDMMMIOKK_OFFSET))(this, a1, a2);
		}

		::System::Boolean MOOAGPDEGPJ(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MDIHAGAIABG_MOOAGPDEGPJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean HKBFABGNOMA(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MDIHAGAIABG_HKBFABGNOMA_OFFSET))(this, a1, a2, a3);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class HPLNOGAJHKC;
class LOHBCIPAIPI;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIGOOJIBGJG_BGEMMKGABDF_OFFSET UNITYSDK_OFFSET(0x154BAB40)
#define EIGOOJIBGJG_COAMJLKPKIP_OFFSET UNITYSDK_OFFSET(0x154BAC10)
#define EIGOOJIBGJG_CTOR_OFFSET UNITYSDK_OFFSET(0x154BAC50)
#define EIGOOJIBGJG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154BA8B0)
#define EIGOOJIBGJG_INIT_OFFSET UNITYSDK_OFFSET(0x154BA860)
#define EIGOOJIBGJG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x154BA900)

inline static constexpr unsigned int EIGOOJIBGJG_TypeDefinitionIndex = 62882;

	class EIGOOJIBGJG : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HPLNOGAJHKC*>* JOIHGPDOPCF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGOOJIBGJG_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGOOJIBGJG_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGOOJIBGJG_DISPOSE_OFFSET))(this);
		}

		::System::Void LMBKNCAIDLC(::Google::Protobuf::Collections::RepeatedField_1<::LOHBCIPAIPI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::LOHBCIPAIPI*>*))((::PBYTE)hIl2Cpp + EIGOOJIBGJG_LMBKNCAIDLC_OFFSET))(this, a1);
		}

		::System::Boolean BGEMMKGABDF(::System::UInt32 a1, ::HPLNOGAJHKC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::HPLNOGAJHKC*))((::PBYTE)hIl2Cpp + EIGOOJIBGJG_BGEMMKGABDF_OFFSET))(this, a1, a2);
		}

		::System::Void COAMJLKPKIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGOOJIBGJG_COAMJLKPKIP_OFFSET))(this);
		}

	};

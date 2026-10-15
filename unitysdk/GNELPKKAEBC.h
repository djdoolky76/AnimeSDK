#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/LogicChimeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeProxy.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GNELPKKAEBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x15AF5060)
#define GNELPKKAEBC_CTOR_OFFSET UNITYSDK_OFFSET(0x15AF43A0)
#define GNELPKKAEBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AF4A50)
#define GNELPKKAEBC_EAGICECFLFG_OFFSET UNITYSDK_OFFSET(0x15AF49A0)
#define GNELPKKAEBC_GNGKEEGOFIE_OFFSET UNITYSDK_OFFSET(0x15AF4B50)
#define GNELPKKAEBC_IAIIGFFHJAL_1_OFFSET UNITYSDK_OFFSET(0x15AF4FF0)
#define GNELPKKAEBC_IAIIGFFHJAL_OFFSET UNITYSDK_OFFSET(0x15AF4EF0)
#define GNELPKKAEBC_ICINPELIFCC_OFFSET UNITYSDK_OFFSET(0x15AF4910)
#define GNELPKKAEBC_IFJOPBEPCEE_OFFSET UNITYSDK_OFFSET(0x15AF46D0)
#define GNELPKKAEBC_KBMHMHFNPNF_OFFSET UNITYSDK_OFFSET(0x15AF4960)
#define GNELPKKAEBC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15AF49E0)
#define GNELPKKAEBC_PCAGBGGPLDO_OFFSET UNITYSDK_OFFSET(0x15AF4D60)
#define GNELPKKAEBC_PHFKFBLIBKG_OFFSET UNITYSDK_OFFSET(0x15AF4720)

inline static constexpr unsigned int GNELPKKAEBC_TypeDefinitionIndex = 78986;

	class GNELPKKAEBC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::Prop::ChimePuzzle::LogicChimeType>* OCIJCENFCOD; // 0x10
		::Il2CppArray<::System::Int32>* FDHJNHGLLEL; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* FOIBNHFMDMO; // 0x20
		::System::Int32 BFLNNOEKIGE; // 0x28
		static ::System::Int32* StaticGet_EHNNGMCDIIL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GNELPKKAEBC")->GetStaticField(0x152F0);
		}

		static ::System::Int32* StaticGet_PNNIOKLAAPO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GNELPKKAEBC")->GetStaticField(0x152F4);
		}

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimePuzzle::ChimeProxy>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimePuzzle::ChimeProxy>*, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + GNELPKKAEBC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNELPKKAEBC_CCTOR_OFFSET))();
		}

		::System::Void IFJOPBEPCEE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNELPKKAEBC_IFJOPBEPCEE_OFFSET))(this, a1);
		}

		::System::Void ICINPELIFCC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNELPKKAEBC_ICINPELIFCC_OFFSET))(this, a1);
		}

		::System::Boolean KBMHMHFNPNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNELPKKAEBC_KBMHMHFNPNF_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* EAGICECFLFG()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNELPKKAEBC_EAGICECFLFG_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + GNELPKKAEBC_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNELPKKAEBC_DISPOSE_OFFSET))(this);
		}

		::System::Void PHFKFBLIBKG(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GNELPKKAEBC_PHFKFBLIBKG_OFFSET))(this, a1, a2);
		}

		::System::Int32 PCAGBGGPLDO(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNELPKKAEBC_PCAGBGGPLDO_OFFSET))(this, a1);
		}

		::System::Void GNGKEEGOFIE(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GNELPKKAEBC_GNGKEEGOFIE_OFFSET))(this, a1, a2);
		}

		::System::Int32 IAIIGFFHJAL(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::HashSet_1<::System::Int32>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GNELPKKAEBC_IAIIGFFHJAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 IAIIGFFHJAL_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GNELPKKAEBC_IAIIGFFHJAL_1_OFFSET))(this, a1, a2);
		}

	};

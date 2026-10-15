#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/DAFINEMBGOK.h"
namespace RPG::Client::Prop { class CommandRobotPuzzleBlock; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OGJCOKNPCMD_BBLMFIDEOAJ_OFFSET UNITYSDK_OFFSET(0xBE58C30)
#define OGJCOKNPCMD_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE59380)
#define OGJCOKNPCMD_CTOR_OFFSET UNITYSDK_OFFSET(0xBE58930)
#define OGJCOKNPCMD_DAGECALLDCI_OFFSET UNITYSDK_OFFSET(0xBE58AD0)
#define OGJCOKNPCMD_DBGAKEEMIJI_OFFSET UNITYSDK_OFFSET(0xBE59260)
#define OGJCOKNPCMD_DEEFFIGPONC_OFFSET UNITYSDK_OFFSET(0xBE58D40)
#define OGJCOKNPCMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE588E0)
#define OGJCOKNPCMD_DMPJCIMBIKC_OFFSET UNITYSDK_OFFSET(0xBE59010)
#define OGJCOKNPCMD_GET_BEGINPOSITION_OFFSET UNITYSDK_OFFSET(0xBE59340)
#define OGJCOKNPCMD_GET_DESTINATIONPOSITION_OFFSET UNITYSDK_OFFSET(0xBE59360)
#define OGJCOKNPCMD_JBIHKPBDLLN_OFFSET UNITYSDK_OFFSET(0xBE590E0)
#define OGJCOKNPCMD_ODDKHGLOLHH_OFFSET UNITYSDK_OFFSET(0xBE589F0)
#define OGJCOKNPCMD_SET_BEGINPOSITION_OFFSET UNITYSDK_OFFSET(0xBE59350)
#define OGJCOKNPCMD_SET_DESTINATIONPOSITION_OFFSET UNITYSDK_OFFSET(0xBE59370)

	class OGJCOKNPCMD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* EPEGPFJFBOO; // 0x10
		::System::Object* GLELOFCFBCO; // 0x18
		::UnityEngine::Vector2Int _DestinationPosition_k__BackingField; // 0x20
		::UnityEngine::Vector2Int _BeginPosition_k__BackingField; // 0x28
		::System::Int32 NLIFGOAGCCG; // 0x30
		::System::Int32 DCBJLCHENHJ; // 0x34
		::System::Int32 LPFLIFFMJEL; // 0x38
		static ::UnityEngine::Vector2Int* StaticGet_IOEILNAMLFG()
		{
			return (::UnityEngine::Vector2Int*)UnitySDK::FromName("", "OGJCOKNPCMD")->GetStaticField(0x14D40);
		}

		static ::UnityEngine::Vector2Int* StaticGet_PBPNDAHPKNC()
		{
			return (::UnityEngine::Vector2Int*)UnitySDK::FromName("", "OGJCOKNPCMD")->GetStaticField(0x14D48);
		}

		static ::UnityEngine::Vector2Int* StaticGet_DPONCNHGGNA()
		{
			return (::UnityEngine::Vector2Int*)UnitySDK::FromName("", "OGJCOKNPCMD")->GetStaticField(0x14D50);
		}

		static ::UnityEngine::Vector2Int* StaticGet_AJHIHGAINLC()
		{
			return (::UnityEngine::Vector2Int*)UnitySDK::FromName("", "OGJCOKNPCMD")->GetStaticField(0x14D58);
		}

		// static const ::System::Object OIONKEGECCE; // 0x0
		// static const ::System::Object GBPGEEAHGHD; // 0x0
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OGJCOKNPCMD_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGJCOKNPCMD_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJCOKNPCMD_DISPOSE_OFFSET))(this);
		}

		::System::Void ODDKHGLOLHH(::RPG::Client::Prop::CommandRobotPuzzleBlock* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CommandRobotPuzzleBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + OGJCOKNPCMD_ODDKHGLOLHH_OFFSET))(this, a1, a2);
		}

		::System::Void DAGECALLDCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJCOKNPCMD_DAGECALLDCI_OFFSET))(this);
		}

		::System::Boolean BBLMFIDEOAJ(::System::Collections::Generic::List_1<::RPG::Client::Prop::CommandRobotPuzzleDirection>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CommandRobotPuzzleDirection>*))((::PBYTE)hIl2Cpp + OGJCOKNPCMD_BBLMFIDEOAJ_OFFSET))(this, a1);
		}

		::System::Void DEEFFIGPONC(::UnityEngine::Vector2Int a1, ::RPG::Client::Prop::CommandRobotPuzzleDirection a2, ::UnityEngine::Vector2Int a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::Prop::CommandRobotPuzzleDirection, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OGJCOKNPCMD_DEEFFIGPONC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JBIHKPBDLLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJCOKNPCMD_JBIHKPBDLLN_OFFSET))(this);
		}

		::System::Int32 DBGAKEEMIJI(::UnityEngine::Vector2Int a1, ::DAFINEMBGOK a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int, ::DAFINEMBGOK))((::PBYTE)hIl2Cpp + OGJCOKNPCMD_DBGAKEEMIJI_OFFSET))(this, a1, a2);
		}

		::System::Void DMPJCIMBIKC(::DAFINEMBGOK a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Void(*)(::PVOID, ::DAFINEMBGOK, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OGJCOKNPCMD_DMPJCIMBIKC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2Int get_BeginPosition()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJCOKNPCMD_GET_BEGINPOSITION_OFFSET))(this);
		}

		::System::Void set_BeginPosition(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OGJCOKNPCMD_SET_BEGINPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int get_DestinationPosition()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJCOKNPCMD_GET_DESTINATIONPOSITION_OFFSET))(this);
		}

		::System::Void set_DestinationPosition(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + OGJCOKNPCMD_SET_DESTINATIONPOSITION_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/CriWare/CriAtomEx_AisacControlInfo.h"
#include "unitysdk/CriWare/CriAtomEx_CueInfo.h"
#include "unitysdk/CriWare/CriAtomEx_WaveformInfo.h"
#include "unitysdk/System/Nullable_1.h"
namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriFsBinder; }
namespace System { class Object; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXACB_ATTACHAWBFILE_OFFSET UNITYSDK_OFFSET(0x1E2CD660)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_ATTACHAWBFILE_OFFSET UNITYSDK_OFFSET(0x1E2CD760)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_DETACHAWBFILE_OFFSET UNITYSDK_OFFSET(0x1E2CD900)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_EXISTSID_OFFSET UNITYSDK_OFFSET(0x1E2CB290)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_EXISTSNAME_OFFSET UNITYSDK_OFFSET(0x1E2CB160)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETBLOCKINDEXBYID_OFFSET UNITYSDK_OFFSET(0x1E2CC8A0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETBLOCKINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2CC730)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYID_OFFSET UNITYSDK_OFFSET(0x1E2CB8C0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x1E2CBBC0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2CB5A0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUEPLAYINGCOUNTBYID_OFFSET UNITYSDK_OFFSET(0x1E2CC5E0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUEPLAYINGCOUNTBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2CC4B0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUES_OFFSET UNITYSDK_OFFSET(0x1E2CBD80)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLSBYID_OFFSET UNITYSDK_OFFSET(0x1E2CCB20)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLSBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2CC9F0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETUSABLEAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x1E2CD100)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETUSABLEAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2CCE00)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETWAVEFORMINFOBYID_OFFSET UNITYSDK_OFFSET(0x1E2CC380)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETWAVEFORMINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2CC070)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_ISATTACHEDAWBFILE_OFFSET UNITYSDK_OFFSET(0x1E2CDB60)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_ISREADYTORELEASE_OFFSET UNITYSDK_OFFSET(0x1E2CDA30)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_LOADACBDATA_OFFSET UNITYSDK_OFFSET(0x1E2CABF0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_LOADACBFILE_OFFSET UNITYSDK_OFFSET(0x1E2CAA70)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RELEASE_OFFSET UNITYSDK_OFFSET(0x1E2CB030)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RESETCUETYPESTATEBYID_OFFSET UNITYSDK_OFFSET(0x1E2CD5E0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RESETCUETYPESTATEBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2CD4C0)
#define CRIWARE_CRIATOMEXACB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CAB60)
#define CRIWARE_CRIATOMEXACB_DECRYPT_OFFSET UNITYSDK_OFFSET(0x1E2CDC10)
#define CRIWARE_CRIATOMEXACB_DETACHAWBFILE_OFFSET UNITYSDK_OFFSET(0x1E2CD850)
#define CRIWARE_CRIATOMEXACB_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E2CAF30)
#define CRIWARE_CRIATOMEXACB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E2BD460)
#define CRIWARE_CRIATOMEXACB_EXISTS_1_OFFSET UNITYSDK_OFFSET(0x1E2CB200)
#define CRIWARE_CRIATOMEXACB_EXISTS_OFFSET UNITYSDK_OFFSET(0x1E2CB0B0)
#define CRIWARE_CRIATOMEXACB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E2CDC60)
#define CRIWARE_CRIATOMEXACB_GETBLOCKINDEX_1_OFFSET UNITYSDK_OFFSET(0x1E2CC7F0)
#define CRIWARE_CRIATOMEXACB_GETBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x1E2CC670)
#define CRIWARE_CRIATOMEXACB_GETCUEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x1E2CB950)
#define CRIWARE_CRIATOMEXACB_GETCUEINFOLIST_OFFSET UNITYSDK_OFFSET(0x1E2CBC50)
#define CRIWARE_CRIATOMEXACB_GETCUEINFO_1_OFFSET UNITYSDK_OFFSET(0x1E2CB650)
#define CRIWARE_CRIATOMEXACB_GETCUEINFO_OFFSET UNITYSDK_OFFSET(0x1E2CB320)
#define CRIWARE_CRIATOMEXACB_GETLOADPROGRESS_OFFSET UNITYSDK_OFFSET(0x1E2CDC00)
#define CRIWARE_CRIATOMEXACB_GETNUMCUEPLAYING_1_OFFSET UNITYSDK_OFFSET(0x1E2CC550)
#define CRIWARE_CRIATOMEXACB_GETNUMCUEPLAYING_OFFSET UNITYSDK_OFFSET(0x1E2CC410)
#define CRIWARE_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLS_1_OFFSET UNITYSDK_OFFSET(0x1E2CCA90)
#define CRIWARE_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLS_OFFSET UNITYSDK_OFFSET(0x1E2CC950)
#define CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROLLIST_1_OFFSET UNITYSDK_OFFSET(0x1E2CD2F0)
#define CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROLLIST_OFFSET UNITYSDK_OFFSET(0x1E2CD1A0)
#define CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x1E2CCEC0)
#define CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x1E2CCBB0)
#define CRIWARE_CRIATOMEXACB_GETWAVEFORMINFO_1_OFFSET UNITYSDK_OFFSET(0x1E2CC120)
#define CRIWARE_CRIATOMEXACB_GETWAVEFORMINFO_OFFSET UNITYSDK_OFFSET(0x1E2CBE00)
#define CRIWARE_CRIATOMEXACB_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1E2CAA60)
#define CRIWARE_CRIATOMEXACB_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1E2CAA50)
#define CRIWARE_CRIATOMEXACB_ISATTACHEDAWBFILE_OFFSET UNITYSDK_OFFSET(0x1E2CDAB0)
#define CRIWARE_CRIATOMEXACB_ISREADYTORELEASE_OFFSET UNITYSDK_OFFSET(0x1E2CD9A0)
#define CRIWARE_CRIATOMEXACB_LOADACBDATA_1_OFFSET UNITYSDK_OFFSET(0x1E2CACC0)
#define CRIWARE_CRIATOMEXACB_LOADACBDATA_OFFSET UNITYSDK_OFFSET(0x1E2BDFB0)
#define CRIWARE_CRIATOMEXACB_LOADACBFILE_OFFSET UNITYSDK_OFFSET(0x1E2BDD20)
#define CRIWARE_CRIATOMEXACB_RESETCUETYPESTATE_1_OFFSET UNITYSDK_OFFSET(0x1E2CD560)
#define CRIWARE_CRIATOMEXACB_RESETCUETYPESTATE_OFFSET UNITYSDK_OFFSET(0x1E2CD420)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcb_TypeDefinitionIndex = 40994;

	class CriAtomExAcb : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20
		::System::Runtime::InteropServices::GCHandle dataHandle; // 0x28
		::System::Void _ctor(::System::IntPtr a1, ::System::Nullable_1<::System::Runtime::InteropServices::GCHandle> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Nullable_1<::System::Runtime::InteropServices::GCHandle>))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Boolean get_isAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GET_ISAVAILABLE_OFFSET))(this);
		}

		static ::CriWare::CriAtomExAcb* LoadAcbFile(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::CriWare::CriAtomExAcb*(*)(::CriWare::CriFsBinder*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_LOADACBFILE_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriAtomExAcb* LoadAcbData(::Il2CppArray<::System::Byte>* a1, ::CriWare::CriFsBinder* a2, ::System::String* a3)
		{
			return ((::CriWare::CriAtomExAcb*(*)(::Il2CppArray<::System::Byte>*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_LOADACBDATA_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriAtomExAcb* LoadAcbData_1(::System::IntPtr a1, ::System::Int32 a2, ::CriWare::CriFsBinder* a3, ::System::String* a4)
		{
			return ((::CriWare::CriAtomExAcb*(*)(::System::IntPtr, ::System::Int32, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_LOADACBDATA_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Boolean Exists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_EXISTS_OFFSET))(this, a1);
		}

		::System::Boolean Exists_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_EXISTS_1_OFFSET))(this, a1);
		}

		::System::Boolean GetCueInfo(::System::String* a1, ::CriWare::CriAtomEx_CueInfo a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::CriWare::CriAtomEx_CueInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETCUEINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetCueInfo_1(::System::Int32 a1, ::CriWare::CriAtomEx_CueInfo a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriAtomEx_CueInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETCUEINFO_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetCueInfoByIndex(::System::Int32 a1, ::CriWare::CriAtomEx_CueInfo a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriAtomEx_CueInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETCUEINFOBYINDEX_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* GetCueInfoList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETCUEINFOLIST_OFFSET))(this);
		}

		::System::Boolean GetWaveFormInfo(::System::String* a1, ::CriWare::CriAtomEx_WaveformInfo a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::CriWare::CriAtomEx_WaveformInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETWAVEFORMINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetWaveFormInfo_1(::System::Int32 a1, ::CriWare::CriAtomEx_WaveformInfo a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriAtomEx_WaveformInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETWAVEFORMINFO_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetNumCuePlaying(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETNUMCUEPLAYING_OFFSET))(this, a1);
		}

		::System::Int32 GetNumCuePlaying_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETNUMCUEPLAYING_1_OFFSET))(this, a1);
		}

		::System::Int32 GetBlockIndex(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETBLOCKINDEX_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetBlockIndex_1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETBLOCKINDEX_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetNumUsableAisacControls(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLS_OFFSET))(this, a1);
		}

		::System::Int32 GetNumUsableAisacControls_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLS_1_OFFSET))(this, a1);
		}

		::System::Boolean GetUsableAisacControl(::System::String* a1, ::System::Int32 a2, ::CriWare::CriAtomEx_AisacControlInfo a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::CriWare::CriAtomEx_AisacControlInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetUsableAisacControl_1(::System::Int32 a1, ::System::Int32 a2, ::CriWare::CriAtomEx_AisacControlInfo a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::CriWare::CriAtomEx_AisacControlInfo))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROL_1_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Object*>* GetUsableAisacControlList(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROLLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetUsableAisacControlList_1(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROLLIST_1_OFFSET))(this, a1);
		}

		::System::Void ResetCueTypeState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_RESETCUETYPESTATE_OFFSET))(this, a1);
		}

		::System::Void ResetCueTypeState_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_RESETCUETYPESTATE_1_OFFSET))(this, a1);
		}

		::System::Void AttachAwbFile(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_ATTACHAWBFILE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DetachAwbFile(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_DETACHAWBFILE_OFFSET))(this, a1);
		}

		::System::Boolean IsReadyToRelease()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_ISREADYTORELEASE_OFFSET))(this);
		}

		::System::Boolean IsAttachedAwbFile(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_ISATTACHEDAWBFILE_OFFSET))(this, a1);
		}

		::System::Single GetLoadProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETLOADPROGRESS_OFFSET))(this);
		}

		::System::Void Decrypt(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_DECRYPT_OFFSET))(this, a1, a2);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr criAtomExAcb_LoadAcbFile(::System::IntPtr a1, ::System::String* a2, ::System::IntPtr a3, ::System::String* a4, ::System::IntPtr a5, ::System::Int32 a6)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_LOADACBFILE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::IntPtr criAtomExAcb_LoadAcbData(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3, ::System::String* a4, ::System::IntPtr a5, ::System::Int32 a6)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_LOADACBDATA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void criAtomExAcb_Release(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RELEASE_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExAcb_GetNumCues(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUES_OFFSET))(a1);
		}

		static ::System::Boolean criAtomExAcb_ExistsId(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_EXISTSID_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExAcb_ExistsName(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_EXISTSNAME_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcb_GetNumUsableAisacControlsById(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLSBYID_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcb_GetNumUsableAisacControlsByName(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLSBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExAcb_GetUsableAisacControlById(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt16 a3, ::System::IntPtr a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETUSABLEAISACCONTROLBYID_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean criAtomExAcb_GetUsableAisacControlByName(::System::IntPtr a1, ::System::String* a2, ::System::UInt16 a3, ::System::IntPtr a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*, ::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETUSABLEAISACCONTROLBYNAME_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean criAtomExAcb_GetWaveformInfoById(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETWAVEFORMINFOBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExAcb_GetWaveformInfoByName(::System::IntPtr a1, ::System::String* a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETWAVEFORMINFOBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExAcb_GetCueInfoByName(::System::IntPtr a1, ::System::String* a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExAcb_GetCueInfoById(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExAcb_GetCueInfoByIndex(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYINDEX_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criAtomExAcb_GetNumCuePlayingCountByName(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUEPLAYINGCOUNTBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcb_GetNumCuePlayingCountById(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUEPLAYINGCOUNTBYID_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcb_GetBlockIndexById(::System::IntPtr a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETBLOCKINDEXBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criAtomExAcb_GetBlockIndexByName(::System::IntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETBLOCKINDEXBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExAcb_ResetCueTypeStateByName(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RESETCUETYPESTATEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExAcb_ResetCueTypeStateById(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RESETCUETYPESTATEBYID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExAcb_AttachAwbFile(::System::IntPtr a1, ::System::IntPtr a2, ::System::String* a3, ::System::String* a4, ::System::IntPtr a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_ATTACHAWBFILE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void criAtomExAcb_DetachAwbFile(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_DETACHAWBFILE_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExAcb_IsReadyToRelease(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_ISREADYTORELEASE_OFFSET))(a1);
		}

		static ::System::Boolean criAtomExAcb_IsAttachedAwbFile(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_ISATTACHEDAWBFILE_OFFSET))(a1, a2);
		}

	};
}

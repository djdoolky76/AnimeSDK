#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIMANAVP9_CRIMANAUNITY_GETALLOCATORMANAGER_OFFSET UNITYSDK_OFFSET(0x2006CB40)
#define CRIWARE_CRIMANAVP9_CRIMVPLY_ATTACHCODECINTERFACE_OFFSET UNITYSDK_OFFSET(0x2006CD50)
#define CRIWARE_CRIMANAVP9_CRIVVP9_GETALPHAINTERFACE_OFFSET UNITYSDK_OFFSET(0x2006CCD0)
#define CRIWARE_CRIMANAVP9_CRIVVP9_GETINTERFACE_OFFSET UNITYSDK_OFFSET(0x2006CC50)
#define CRIWARE_CRIMANAVP9_CRIVVP9_SETUSERALLOCATOR_OFFSET UNITYSDK_OFFSET(0x2006CBC0)
#define CRIWARE_CRIMANAVP9_CRIWAREUNITY_GETALLOCATEFUNC_OFFSET UNITYSDK_OFFSET(0x2006CA40)
#define CRIWARE_CRIMANAVP9_CRIWAREUNITY_GETDEALLOCATEFUNC_OFFSET UNITYSDK_OFFSET(0x2006CAC0)
#define CRIWARE_CRIMANAVP9_REGISTERVP9DECODERSETUP_OFFSET UNITYSDK_OFFSET(0x2006CDE0)
#define CRIWARE_CRIMANAVP9_SETUPVP9DECODER_OFFSET UNITYSDK_OFFSET(0x2006C5E0)
#define CRIWARE_CRIMANAVP9_SUPPORTCURRENTPLATFORM_OFFSET UNITYSDK_OFFSET(0x2006C5D0)

namespace CriWare
{
	inline static constexpr unsigned int CriManaVp9_TypeDefinitionIndex = 96125;

	class CriManaVp9 : public ::System::Object
	{
	public:
		// static const ::System::String* scriptVersionString; // 0x0
		// static const ::System::String* cri_mana_vp9_name; // 0x0

		static ::System::Boolean SupportCurrentPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_SUPPORTCURRENTPLATFORM_OFFSET))();
		}

		static ::System::Void SetupVp9Decoder()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_SETUPVP9DECODER_OFFSET))();
		}

		static ::System::Void RegisterVp9DecoderSetup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_REGISTERVP9DECODERSETUP_OFFSET))();
		}

		static ::System::IntPtr criWareUnity_GetAllocateFunc()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_CRIWAREUNITY_GETALLOCATEFUNC_OFFSET))();
		}

		static ::System::IntPtr criWareUnity_GetDeallocateFunc()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_CRIWAREUNITY_GETDEALLOCATEFUNC_OFFSET))();
		}

		static ::System::IntPtr criManaUnity_GetAllocatorManager()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_CRIMANAUNITY_GETALLOCATORMANAGER_OFFSET))();
		}

		static ::System::Void criMvPly_AttachCodecInterface(::System::Int32 codec_type, ::System::IntPtr codec_if, ::System::IntPtr codecalpha_if)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_CRIMVPLY_ATTACHCODECINTERFACE_OFFSET))(codec_type, codec_if, codecalpha_if);
		}

		static ::System::Void criVvp9_SetUserAllocator(::System::IntPtr alloc_func, ::System::IntPtr free_func, ::System::IntPtr usr_obj)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_CRIVVP9_SETUSERALLOCATOR_OFFSET))(alloc_func, free_func, usr_obj);
		}

		static ::System::IntPtr criVvp9_GetInterface()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_CRIVVP9_GETINTERFACE_OFFSET))();
		}

		static ::System::IntPtr criVvp9_GetAlphaInterface()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_CRIVVP9_GETALPHAINTERFACE_OFFSET))();
		}
	};
}

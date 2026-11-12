#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class KcpOutput; }

#define MIHOYO_SDK_KCPNATIVE_CTOR_OFFSET UNITYSDK_OFFSET(0xB61A600)
#define MIHOYO_SDK_KCPNATIVE_IKCP_CHECK_OFFSET UNITYSDK_OFFSET(0xB619AF0)
#define MIHOYO_SDK_KCPNATIVE_IKCP_CREATE_OFFSET UNITYSDK_OFFSET(0xB619B80)
#define MIHOYO_SDK_KCPNATIVE_IKCP_FLUSH_OFFSET UNITYSDK_OFFSET(0xB619C10)
#define MIHOYO_SDK_KCPNATIVE_IKCP_GETCONV_OFFSET UNITYSDK_OFFSET(0xB619C90)
#define MIHOYO_SDK_KCPNATIVE_IKCP_INPUT_OFFSET UNITYSDK_OFFSET(0xB619D10)
#define MIHOYO_SDK_KCPNATIVE_IKCP_NODELAY_OFFSET UNITYSDK_OFFSET(0xB619DB0)
#define MIHOYO_SDK_KCPNATIVE_IKCP_PEEKSIZE_OFFSET UNITYSDK_OFFSET(0xB619E60)
#define MIHOYO_SDK_KCPNATIVE_IKCP_RECV_OFFSET UNITYSDK_OFFSET(0xB619EE0)
#define MIHOYO_SDK_KCPNATIVE_IKCP_RELEASE_OFFSET UNITYSDK_OFFSET(0xB619F80)
#define MIHOYO_SDK_KCPNATIVE_IKCP_SEND_OFFSET UNITYSDK_OFFSET(0xB61A000)
#define MIHOYO_SDK_KCPNATIVE_IKCP_SETMINRTO_OFFSET UNITYSDK_OFFSET(0xB61A0A0)
#define MIHOYO_SDK_KCPNATIVE_IKCP_SETMTU_OFFSET UNITYSDK_OFFSET(0xB61A120)
#define MIHOYO_SDK_KCPNATIVE_IKCP_SETOUTPUT_OFFSET UNITYSDK_OFFSET(0xB61A1B0)
#define MIHOYO_SDK_KCPNATIVE_IKCP_UPDATE_OFFSET UNITYSDK_OFFSET(0xB61A240)
#define MIHOYO_SDK_KCPNATIVE_IKCP_WAITSND_OFFSET UNITYSDK_OFFSET(0xB61A2C0)
#define MIHOYO_SDK_KCPNATIVE_IKCP_WNDSIZE_OFFSET UNITYSDK_OFFSET(0xB61A340)
#define MIHOYO_SDK_KCPNATIVE_KCPCHECK_OFFSET UNITYSDK_OFFSET(0xB617FC0)
#define MIHOYO_SDK_KCPNATIVE_KCPCREATE_OFFSET UNITYSDK_OFFSET(0xB617330)
#define MIHOYO_SDK_KCPNATIVE_KCPFLUSH_OFFSET UNITYSDK_OFFSET(0xB61A3D0)
#define MIHOYO_SDK_KCPNATIVE_KCPGETCONV_OFFSET UNITYSDK_OFFSET(0xB61A450)
#define MIHOYO_SDK_KCPNATIVE_KCPINPUT_OFFSET UNITYSDK_OFFSET(0xB618670)
#define MIHOYO_SDK_KCPNATIVE_KCPNODELAY_OFFSET UNITYSDK_OFFSET(0xB617500)
#define MIHOYO_SDK_KCPNATIVE_KCPPEEKSIZE_OFFSET UNITYSDK_OFFSET(0xB618720)
#define MIHOYO_SDK_KCPNATIVE_KCPRECV_OFFSET UNITYSDK_OFFSET(0xB6187B0)
#define MIHOYO_SDK_KCPNATIVE_KCPRELEASE_OFFSET UNITYSDK_OFFSET(0xB6172B0)
#define MIHOYO_SDK_KCPNATIVE_KCPSEND_OFFSET UNITYSDK_OFFSET(0xB618D60)
#define MIHOYO_SDK_KCPNATIVE_KCPSETMINRTO_OFFSET UNITYSDK_OFFSET(0xB61A4E0)
#define MIHOYO_SDK_KCPNATIVE_KCPSETMTU_OFFSET UNITYSDK_OFFSET(0xB617660)
#define MIHOYO_SDK_KCPNATIVE_KCPSETOUTPUT_OFFSET UNITYSDK_OFFSET(0xB618B40)
#define MIHOYO_SDK_KCPNATIVE_KCPUPDATE_OFFSET UNITYSDK_OFFSET(0xB617F30)
#define MIHOYO_SDK_KCPNATIVE_KCPWAITSND_OFFSET UNITYSDK_OFFSET(0xB61A570)
#define MIHOYO_SDK_KCPNATIVE_KCPWNDSIZE_OFFSET UNITYSDK_OFFSET(0xB6175C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPNative_TypeDefinitionIndex = 47166;

	class KCPNative : public ::System::Object
	{
	public:
		// static const ::System::String* KcpDLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_CTOR_OFFSET))(this);
		}

		static ::System::UInt32 ikcp_check(::System::IntPtr a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_CHECK_OFFSET))(a1, a2);
		}

		static ::System::IntPtr ikcp_create(::System::UInt32 a1, ::System::IntPtr a2)
		{
			return ((::System::IntPtr(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_CREATE_OFFSET))(a1, a2);
		}

		static ::System::Void ikcp_flush(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_FLUSH_OFFSET))(a1);
		}

		static ::System::UInt32 ikcp_getconv(::System::IntPtr a1)
		{
			return ((::System::UInt32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_GETCONV_OFFSET))(a1);
		}

		static ::System::Int32 ikcp_input(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_INPUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 ikcp_nodelay(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_NODELAY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 ikcp_peeksize(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_PEEKSIZE_OFFSET))(a1);
		}

		static ::System::Int32 ikcp_recv(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_RECV_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ikcp_release(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_RELEASE_OFFSET))(a1);
		}

		static ::System::Int32 ikcp_send(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_SEND_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ikcp_setminrto(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_SETMINRTO_OFFSET))(a1, a2);
		}

		static ::System::Int32 ikcp_setmtu(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_SETMTU_OFFSET))(a1, a2);
		}

		static ::System::Void ikcp_setoutput(::System::IntPtr a1, ::MiHoYo::SDK::KcpOutput* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::MiHoYo::SDK::KcpOutput*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_SETOUTPUT_OFFSET))(a1, a2);
		}

		static ::System::Void ikcp_update(::System::IntPtr a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_UPDATE_OFFSET))(a1, a2);
		}

		static ::System::Int32 ikcp_waitsnd(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_WAITSND_OFFSET))(a1);
		}

		static ::System::Int32 ikcp_wndsize(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_WNDSIZE_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 KcpCheck(::System::IntPtr a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPCHECK_OFFSET))(a1, a2);
		}

		static ::System::IntPtr KcpCreate(::System::UInt32 a1, ::System::IntPtr a2)
		{
			return ((::System::IntPtr(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPCREATE_OFFSET))(a1, a2);
		}

		static ::System::Void KcpFlush(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPFLUSH_OFFSET))(a1);
		}

		static ::System::UInt32 KcpGetconv(::System::IntPtr a1)
		{
			return ((::System::UInt32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPGETCONV_OFFSET))(a1);
		}

		static ::System::Int32 KcpInput(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPINPUT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 KcpNodelay(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPNODELAY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 KcpPeeksize(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPPEEKSIZE_OFFSET))(a1);
		}

		static ::System::Int32 KcpRecv(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPRECV_OFFSET))(a1, a2, a3);
		}

		static ::System::Void KcpRelease(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPRELEASE_OFFSET))(a1);
		}

		static ::System::Int32 KcpSend(::System::IntPtr a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPSEND_OFFSET))(a1, a2, a3);
		}

		static ::System::Void KcpSetminrto(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPSETMINRTO_OFFSET))(a1, a2);
		}

		static ::System::Int32 KcpSetmtu(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPSETMTU_OFFSET))(a1, a2);
		}

		static ::System::Void KcpSetoutput(::System::IntPtr a1, ::MiHoYo::SDK::KcpOutput* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::MiHoYo::SDK::KcpOutput*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPSETOUTPUT_OFFSET))(a1, a2);
		}

		static ::System::Void KcpUpdate(::System::IntPtr a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPUPDATE_OFFSET))(a1, a2);
		}

		static ::System::Int32 KcpWaitsnd(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPWAITSND_OFFSET))(a1);
		}

		static ::System::Int32 KcpWndsize(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPWNDSIZE_OFFSET))(a1, a2, a3);
		}

	};
}

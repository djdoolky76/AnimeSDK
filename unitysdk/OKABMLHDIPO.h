#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IPVersion.h"
#include "unitysdk/System/Object.h"
class BLIPALAJNDD;
class EPFAOLJKOOK;
class MNFEMJNAJJJ;
class OKABMLHDIPO;
namespace System::Net { class EndPoint; }

#define OKABMLHDIPO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1DDA4AC0)
#define OKABMLHDIPO_CGBKDBKINHO_OFFSET UNITYSDK_OFFSET(0x1DDB1D80)
#define OKABMLHDIPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB1D70)
#define OKABMLHDIPO_IGHMMALPKMB_OFFSET UNITYSDK_OFFSET(0x1DDA8750)
#define OKABMLHDIPO_ILNAHKOGEGB_OFFSET UNITYSDK_OFFSET(0x1DDA52C0)
#define OKABMLHDIPO_OIMIBPILLFN_1_OFFSET UNITYSDK_OFFSET(0x1DDA70C0)
#define OKABMLHDIPO_OIMIBPILLFN_OFFSET UNITYSDK_OFFSET(0x1DDA58F0)
#define OKABMLHDIPO_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0x1DDA4CA0)

	class OKABMLHDIPO : public ::System::Object
	{
	public:
		::MNFEMJNAJJJ* HNEJEKIOPJM; // 0x10
		::MNFEMJNAJJJ* NPHBECAMGNE; // 0x18
		::System::Void _ctor(::MNFEMJNAJJJ* a1, ::MNFEMJNAJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MNFEMJNAJJJ*, ::MNFEMJNAJJJ*))((::PBYTE)hIl2Cpp + OKABMLHDIPO_CTOR_OFFSET))(this, a1, a2);
		}

		static ::OKABMLHDIPO* BPLPBPMEODA(::EPFAOLJKOOK* a1, ::System::Int32 a2)
		{
			return ((::OKABMLHDIPO*(*)(::EPFAOLJKOOK*, ::System::Int32))((::PBYTE)hIl2Cpp + OKABMLHDIPO_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Net::EndPoint* IGHMMALPKMB(::RPG::Client::IPVersion a1)
		{
			return ((::System::Net::EndPoint*(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + OKABMLHDIPO_IGHMMALPKMB_OFFSET))(this, a1);
		}

		::System::Int32 ILNAHKOGEGB(::RPG::Client::IPVersion a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IPVersion, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OKABMLHDIPO_ILNAHKOGEGB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 OIMIBPILLFN(::RPG::Client::IPVersion a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IPVersion, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OKABMLHDIPO_OIMIBPILLFN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OIMIBPILLFN_1(::BLIPALAJNDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLIPALAJNDD*))((::PBYTE)hIl2Cpp + OKABMLHDIPO_OIMIBPILLFN_1_OFFSET))(this, a1);
		}

		::System::Void PDKLDMNAJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKABMLHDIPO_PDKLDMNAJBO_OFFSET))(this);
		}

		::MNFEMJNAJJJ* CGBKDBKINHO(::RPG::Client::IPVersion a1)
		{
			return ((::MNFEMJNAJJJ*(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + OKABMLHDIPO_CGBKDBKINHO_OFFSET))(this, a1);
		}

	};

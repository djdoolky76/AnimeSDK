#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLIPALAJNDD;
class MNFEMJNAJJJ;
namespace System::Net { class EndPoint; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Sockets { class Socket; }

#define MNFEMJNAJJJ_ACEHMFNFEKE_OFFSET UNITYSDK_OFFSET(0x1DDAE7A0)
#define MNFEMJNAJJJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1DDAE7B0)
#define MNFEMJNAJJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDAE880)
#define MNFEMJNAJJJ_ILNAHKOGEGB_OFFSET UNITYSDK_OFFSET(0x1DDAE910)
#define MNFEMJNAJJJ_OIMIBPILLFN_1_OFFSET UNITYSDK_OFFSET(0x1DDAEA40)
#define MNFEMJNAJJJ_OIMIBPILLFN_OFFSET UNITYSDK_OFFSET(0x1DDAE990)
#define MNFEMJNAJJJ_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0x1DDAEB00)

	class MNFEMJNAJJJ : public ::System::Object
	{
	public:
		::System::Net::EndPoint* HIGOBEJCNMC; // 0x10
		::System::Net::Sockets::Socket* OBMIANHIHHE; // 0x18
		::System::Net::IPEndPoint* ONHPMBOENFI; // 0x20
		::System::Void _ctor(::System::Net::Sockets::Socket* a1, ::System::Net::IPEndPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + MNFEMJNAJJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Net::EndPoint* ACEHMFNFEKE()
		{
			return ((::System::Net::EndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFEMJNAJJJ_ACEHMFNFEKE_OFFSET))(this);
		}

		static ::MNFEMJNAJJJ* BPLPBPMEODA(::System::Net::IPEndPoint* a1, ::System::Int32 a2)
		{
			return ((::MNFEMJNAJJJ*(*)(::System::Net::IPEndPoint*, ::System::Int32))((::PBYTE)hIl2Cpp + MNFEMJNAJJJ_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Int32 ILNAHKOGEGB(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MNFEMJNAJJJ_ILNAHKOGEGB_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 OIMIBPILLFN(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MNFEMJNAJJJ_OIMIBPILLFN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OIMIBPILLFN_1(::BLIPALAJNDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLIPALAJNDD*))((::PBYTE)hIl2Cpp + MNFEMJNAJJJ_OIMIBPILLFN_1_OFFSET))(this, a1);
		}

		::System::Void PDKLDMNAJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFEMJNAJJJ_PDKLDMNAJBO_OFFSET))(this);
		}

	};

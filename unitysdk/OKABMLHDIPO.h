#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IPVersion.h"
#include "unitysdk/System/Object.h"
class BLIPALAJNDD;
class EPFAOLJKOOK;
class MNFEMJNAJJJ;
class OKABMLHDIPO;
namespace System::Net { class EndPoint; }

#define OKABMLHDIPO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1DD77260)
#define OKABMLHDIPO_CGBKDBKINHO_OFFSET UNITYSDK_OFFSET(0x1DD84530)
#define OKABMLHDIPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD84520)
#define OKABMLHDIPO_IGHMMALPKMB_OFFSET UNITYSDK_OFFSET(0x1DD7AEF0)
#define OKABMLHDIPO_ILNAHKOGEGB_OFFSET UNITYSDK_OFFSET(0x1DD77A60)
#define OKABMLHDIPO_OIMIBPILLFN_1_OFFSET UNITYSDK_OFFSET(0x1DD79860)
#define OKABMLHDIPO_OIMIBPILLFN_OFFSET UNITYSDK_OFFSET(0x1DD78090)
#define OKABMLHDIPO_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0x1DD77440)

inline static constexpr unsigned int OKABMLHDIPO_TypeDefinitionIndex = 43949;

	class OKABMLHDIPO : public ::System::Object
	{
	public:
		::MNFEMJNAJJJ* NPHBECAMGNE; // 0x10
		::MNFEMJNAJJJ* HNEJEKIOPJM; // 0x18
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

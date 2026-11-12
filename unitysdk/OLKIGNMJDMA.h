#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BAMIOFOKCEB.h"
#include "unitysdk/RPG/Client/ComicDessert/ComicDessertDeviceId.h"
class CIIBMCPDOEG;
class ECFOKHCPINL;
class ICCEOAIJGHL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OLKIGNMJDMA_CCTOR_OFFSET UNITYSDK_OFFSET(0xC80C350)
#define OLKIGNMJDMA_CEOCDEMKNHK_OFFSET UNITYSDK_OFFSET(0xC80ACD0)
#define OLKIGNMJDMA_CTOR_OFFSET UNITYSDK_OFFSET(0xC80A9E0)
#define OLKIGNMJDMA_FALCEPPDIOF_OFFSET UNITYSDK_OFFSET(0xC80B330)
#define OLKIGNMJDMA_HICGDFHMHJD_OFFSET UNITYSDK_OFFSET(0xC80AAA0)
#define OLKIGNMJDMA_ILBIBOHHOHK_OFFSET UNITYSDK_OFFSET(0xC80B840)
#define OLKIGNMJDMA_JMLGCIHBLBC_OFFSET UNITYSDK_OFFSET(0xC80B9B0)
#define OLKIGNMJDMA_LKBGGFMGONE_OFFSET UNITYSDK_OFFSET(0xC80AA50)
#define OLKIGNMJDMA_PPHBGJMPPGL_OFFSET UNITYSDK_OFFSET(0xC80A9F0)

inline static constexpr unsigned int OLKIGNMJDMA_TypeDefinitionIndex = 77086;

	class OLKIGNMJDMA : public ::System::Object
	{
	public:
		::ICCEOAIJGHL* FKNBMMEFOPO; // 0x10
		static ::Il2CppArray<::System::UInt32>** StaticGet_NPBNPGGCKAG()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("", "OLKIGNMJDMA")->GetStaticField(0x563E0);
		}

		// static const ::System::Object KIKIAHKCMLG; // 0x0
		// static const ::System::Object LPOLNHAICNB; // 0x0
		::System::Void _ctor(::ICCEOAIJGHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICCEOAIJGHL*))((::PBYTE)hIl2Cpp + OLKIGNMJDMA_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLKIGNMJDMA_CCTOR_OFFSET))();
		}

		::ECFOKHCPINL* PPHBGJMPPGL(::RPG::Client::ComicDessert::ComicDessertDeviceId a1)
		{
			return ((::ECFOKHCPINL*(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertDeviceId))((::PBYTE)hIl2Cpp + OLKIGNMJDMA_PPHBGJMPPGL_OFFSET))(this, a1);
		}

		::RPG::Client::ComicDessert::ComicDessertDeviceId LKBGGFMGONE(::RPG::Client::ComicDessert::ComicDessertDeviceId a1)
		{
			return ((::RPG::Client::ComicDessert::ComicDessertDeviceId(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertDeviceId))((::PBYTE)hIl2Cpp + OLKIGNMJDMA_LKBGGFMGONE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ComicDessert::ComicDessertDeviceId>* HICGDFHMHJD(::RPG::Client::ComicDessert::ComicDessertDeviceId a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ComicDessert::ComicDessertDeviceId>*(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertDeviceId))((::PBYTE)hIl2Cpp + OLKIGNMJDMA_HICGDFHMHJD_OFFSET))(this, a1);
		}

		::RPG::Client::ComicDessert::ComicDessertDeviceId CEOCDEMKNHK(::CIIBMCPDOEG* a1, ::BAMIOFOKCEB a2)
		{
			return ((::RPG::Client::ComicDessert::ComicDessertDeviceId(*)(::PVOID, ::CIIBMCPDOEG*, ::BAMIOFOKCEB))((::PBYTE)hIl2Cpp + OLKIGNMJDMA_CEOCDEMKNHK_OFFSET))(this, a1, a2);
		}

		::ECFOKHCPINL* FALCEPPDIOF(::BAMIOFOKCEB a1, ::System::Boolean a2)
		{
			return ((::ECFOKHCPINL*(*)(::PVOID, ::BAMIOFOKCEB, ::System::Boolean))((::PBYTE)hIl2Cpp + OLKIGNMJDMA_FALCEPPDIOF_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ComicDessert::ComicDessertDeviceId ILBIBOHHOHK(::CIIBMCPDOEG* a1, ::RPG::Client::ComicDessert::ComicDessertDeviceId a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::ComicDessert::ComicDessertDeviceId(*)(::PVOID, ::CIIBMCPDOEG*, ::RPG::Client::ComicDessert::ComicDessertDeviceId, ::System::Int32))((::PBYTE)hIl2Cpp + OLKIGNMJDMA_ILBIBOHHOHK_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ComicDessert::ComicDessertDeviceId>* JMLGCIHBLBC()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ComicDessert::ComicDessertDeviceId>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKIGNMJDMA_JMLGCIHBLBC_OFFSET))(this);
		}

	};

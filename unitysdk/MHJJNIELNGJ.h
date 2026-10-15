#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TickListType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/BitFlag_1.h"
class DFJOGNHINFE;
class HNEJCOLGHNN;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MHJJNIELNGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB943E10)
#define MHJJNIELNGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB944CE0)
#define MHJJNIELNGJ_HLMNPCMKCOJ_OFFSET UNITYSDK_OFFSET(0xB944CD0)
#define MHJJNIELNGJ_IGOKMGPLAPD_OFFSET UNITYSDK_OFFSET(0xB944BB0)
#define MHJJNIELNGJ_JEKIPINPAFO_1_OFFSET UNITYSDK_OFFSET(0xB944910)
#define MHJJNIELNGJ_JEKIPINPAFO_2_OFFSET UNITYSDK_OFFSET(0xB944980)
#define MHJJNIELNGJ_JEKIPINPAFO_OFFSET UNITYSDK_OFFSET(0xB944870)
#define MHJJNIELNGJ_JJHBKAFAFIO_OFFSET UNITYSDK_OFFSET(0xB944C30)
#define MHJJNIELNGJ_KNADMHCPKFE_OFFSET UNITYSDK_OFFSET(0xB944720)
#define MHJJNIELNGJ_LGMNOFLDNKK_OFFSET UNITYSDK_OFFSET(0xB944AD0)
#define MHJJNIELNGJ_MALHCBCGODO_OFFSET UNITYSDK_OFFSET(0xB9444C0)
#define MHJJNIELNGJ_MNLPOBOEENF_1_OFFSET UNITYSDK_OFFSET(0xB944090)
#define MHJJNIELNGJ_MNLPOBOEENF_2_OFFSET UNITYSDK_OFFSET(0xB944100)
#define MHJJNIELNGJ_MNLPOBOEENF_OFFSET UNITYSDK_OFFSET(0xB943FF0)
#define MHJJNIELNGJ_NFHGJFJICNB_OFFSET UNITYSDK_OFFSET(0xB944A50)

	class MHJJNIELNGJ : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* CFNEKANOBCB; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* EMBAACDMCLC; // 0x18
		::Il2CppArray<::System::Int32>* IGMFMNDHBHL; // 0x20
		::Il2CppArray<::HNEJCOLGHNN*>* BBBMFIOBPBB; // 0x28
		::System::Int32 HAJALHBFDCJ; // 0x30
		::System::Int32 AAGIKJHHODJ; // 0x34
		::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MHJJNIELNGJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MNLPOBOEENF(::DFJOGNHINFE* a1, ::RPG::Client::TickListType a2)
		{
			return ((::System::Void(*)(::PVOID, ::DFJOGNHINFE*, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + MHJJNIELNGJ_MNLPOBOEENF_OFFSET))(this, a1, a2);
		}

		::System::Void MNLPOBOEENF_1(::DFJOGNHINFE* a1, ::RPG::Client::TickListType a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::DFJOGNHINFE*, ::RPG::Client::TickListType, ::System::Int32))((::PBYTE)hIl2Cpp + MHJJNIELNGJ_MNLPOBOEENF_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MNLPOBOEENF_2(::DFJOGNHINFE* a1, ::RPG::Client::TickListType a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::DFJOGNHINFE*, ::RPG::Client::TickListType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MHJJNIELNGJ_MNLPOBOEENF_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 MALHCBCGODO(::HNEJCOLGHNN* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::HNEJCOLGHNN*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MHJJNIELNGJ_MALHCBCGODO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KNADMHCPKFE(::DFJOGNHINFE* a1, ::RPG::Client::TickListType a2)
		{
			return ((::System::Void(*)(::PVOID, ::DFJOGNHINFE*, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + MHJJNIELNGJ_KNADMHCPKFE_OFFSET))(this, a1, a2);
		}

		::System::Void JEKIPINPAFO(::DFJOGNHINFE* a1, ::RPG::Client::BitFlag_1<::RPG::Client::TickListType> a2)
		{
			return ((::System::Void(*)(::PVOID, ::DFJOGNHINFE*, ::RPG::Client::BitFlag_1<::RPG::Client::TickListType>))((::PBYTE)hIl2Cpp + MHJJNIELNGJ_JEKIPINPAFO_OFFSET))(this, a1, a2);
		}

		::System::Void JEKIPINPAFO_1(::DFJOGNHINFE* a1, ::RPG::Client::BitFlag_1<::RPG::Client::TickListType> a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::DFJOGNHINFE*, ::RPG::Client::BitFlag_1<::RPG::Client::TickListType>, ::System::Int32))((::PBYTE)hIl2Cpp + MHJJNIELNGJ_JEKIPINPAFO_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JEKIPINPAFO_2(::DFJOGNHINFE* a1, ::RPG::Client::BitFlag_1<::RPG::Client::TickListType> a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::DFJOGNHINFE*, ::RPG::Client::BitFlag_1<::RPG::Client::TickListType>, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MHJJNIELNGJ_JEKIPINPAFO_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NFHGJFJICNB(::DFJOGNHINFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJOGNHINFE*))((::PBYTE)hIl2Cpp + MHJJNIELNGJ_NFHGJFJICNB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* LGMNOFLDNKK(::System::Int32 a1, ::RPG::Client::TickListType a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + MHJJNIELNGJ_LGMNOFLDNKK_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Int32>* IGOKMGPLAPD(::RPG::Client::TickListType a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + MHJJNIELNGJ_IGOKMGPLAPD_OFFSET))(this, a1);
		}

		::System::Void JJHBKAFAFIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJJNIELNGJ_JJHBKAFAFIO_OFFSET))(this);
		}

		::System::Int32 HLMNPCMKCOJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJJNIELNGJ_HLMNPCMKCOJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJJNIELNGJ_DISPOSE_OFFSET))(this);
		}

	};

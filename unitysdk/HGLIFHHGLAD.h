#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLBAOKOHKCF.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class AKHEOAIPAPA;
class ENGFCDJAFCG;
class OFAKEFLLHNP;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HGLIFHHGLAD_AKBNLLLILFE_OFFSET UNITYSDK_OFFSET(0x1C457080)
#define HGLIFHHGLAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4587A0)
#define HGLIFHHGLAD_EDEKGEAFKHN_OFFSET UNITYSDK_OFFSET(0x1C456320)
#define HGLIFHHGLAD_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0x1C457480)
#define HGLIFHHGLAD_FGHGBHNNKAD_OFFSET UNITYSDK_OFFSET(0x1C4575D0)
#define HGLIFHHGLAD_GCKJFDHNDLO_OFFSET UNITYSDK_OFFSET(0x1C457B50)
#define HGLIFHHGLAD_MMJILOJFLJD_OFFSET UNITYSDK_OFFSET(0x1C457CF0)
#define HGLIFHHGLAD_NDKLAIJOALK_OFFSET UNITYSDK_OFFSET(0x1C457660)
#define HGLIFHHGLAD_PAMKOLICNOL_OFFSET UNITYSDK_OFFSET(0x1C4561A0)
#define HGLIFHHGLAD_PLDKCHKGPIH_OFFSET UNITYSDK_OFFSET(0x1C458240)

inline static constexpr unsigned int HGLIFHHGLAD_TypeDefinitionIndex = 78715;

	class HGLIFHHGLAD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::GLBAOKOHKCF, ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>>* LJAFLGFOJNB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AKHEOAIPAPA*>* OHCMNIPPDIM; // 0x18
		::System::Collections::Generic::Dictionary_2<::GLBAOKOHKCF, ::ENGFCDJAFCG*>* IAFNNMFIMOI; // 0x20
		::System::Boolean DALKJPIGDNO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLIFHHGLAD_CTOR_OFFSET))(this);
		}

		::OFAKEFLLHNP* PAMKOLICNOL(::GLBAOKOHKCF a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::GLBAOKOHKCF))((::PBYTE)hIl2Cpp + HGLIFHHGLAD_PAMKOLICNOL_OFFSET))(this, a1);
		}

		::System::Void AKBNLLLILFE(::Google::Protobuf::Collections::RepeatedField_1<::AKHEOAIPAPA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::AKHEOAIPAPA*>*))((::PBYTE)hIl2Cpp + HGLIFHHGLAD_AKBNLLLILFE_OFFSET))(this, a1);
		}

		::System::Void FGHGBHNNKAD(::AKHEOAIPAPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKHEOAIPAPA*))((::PBYTE)hIl2Cpp + HGLIFHHGLAD_FGHGBHNNKAD_OFFSET))(this, a1);
		}

		::System::Void NDKLAIJOALK(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HGLIFHHGLAD_NDKLAIJOALK_OFFSET))(this, a1);
		}

		::AKHEOAIPAPA* GCKJFDHNDLO(::GLBAOKOHKCF a1)
		{
			return ((::AKHEOAIPAPA*(*)(::PVOID, ::GLBAOKOHKCF))((::PBYTE)hIl2Cpp + HGLIFHHGLAD_GCKJFDHNDLO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* MMJILOJFLJD(::GLBAOKOHKCF a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::GLBAOKOHKCF))((::PBYTE)hIl2Cpp + HGLIFHHGLAD_MMJILOJFLJD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* PLDKCHKGPIH(::GLBAOKOHKCF a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::GLBAOKOHKCF))((::PBYTE)hIl2Cpp + HGLIFHHGLAD_PLDKCHKGPIH_OFFSET))(this, a1);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLIFHHGLAD_FDAFLPCLCEJ_OFFSET))(this);
		}

		::System::Void EDEKGEAFKHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLIFHHGLAD_EDEKGEAFKHN_OFFSET))(this);
		}

	};

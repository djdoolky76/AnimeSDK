#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ODLJOLJDLNI_BDCLHLCDIAP_OFFSET UNITYSDK_OFFSET(0xBDEB450)
#define ODLJOLJDLNI_BNLBKCICNHE_OFFSET UNITYSDK_OFFSET(0xBDEB0F0)
#define ODLJOLJDLNI_CLEAR_OFFSET UNITYSDK_OFFSET(0xBDEB0B0)
#define ODLJOLJDLNI_CTOR_OFFSET UNITYSDK_OFFSET(0xBDEC4B0)
#define ODLJOLJDLNI_HDFCADJIEFD_OFFSET UNITYSDK_OFFSET(0xBDEB550)
#define ODLJOLJDLNI_ILILKENJIAM_OFFSET UNITYSDK_OFFSET(0xBDEB980)
#define ODLJOLJDLNI_PPPNIFKHIOD_OFFSET UNITYSDK_OFFSET(0xBDEB7B0)

inline static constexpr unsigned int ODLJOLJDLNI_TypeDefinitionIndex = 76349;

	class ODLJOLJDLNI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLJOLJDLNI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLJOLJDLNI_CLEAR_OFFSET))(this);
		}

		::RPG::PoolList_1<::RPG::GameCore::FixPoint>* BNLBKCICNHE(::System::UInt32 a1)
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODLJOLJDLNI_BNLBKCICNHE_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* BDCLHLCDIAP(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODLJOLJDLNI_BDCLHLCDIAP_OFFSET))(this, a1);
		}

		::System::String* HDFCADJIEFD(::RPG::Client::TextID a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODLJOLJDLNI_HDFCADJIEFD_OFFSET))(this, a1, a2);
		}

		::System::String* PPPNIFKHIOD(::RPG::Client::TextID a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODLJOLJDLNI_PPPNIFKHIOD_OFFSET))(this, a1, a2);
		}

		::System::String* ILILKENJIAM(::RPG::Client::TextID a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::TextID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ODLJOLJDLNI_ILILKENJIAM_OFFSET))(this, a1, a2, a3);
		}

	};

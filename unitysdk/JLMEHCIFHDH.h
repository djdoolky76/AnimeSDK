#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class JLMEHCIFHDH;
class NGGLPLKJKMM;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define JLMEHCIFHDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C12B0)
#define JLMEHCIFHDH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5C0E90)

inline static constexpr unsigned int JLMEHCIFHDH_TypeDefinitionIndex = 18317;

	class JLMEHCIFHDH : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* MFHALOHAMNO; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* GFDOFDMBDAB; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* IHGPLICHDLA; // 0x20
		::NGGLPLKJKMM* PNMCPEEAOMK; // 0x28
		::System::String* DJGEFBEJKHL; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* KNFAIEMEFAI; // 0x38
		::NGGLPLKJKMM* CIDPKCICEBG; // 0x40
		::NGGLPLKJKMM* FIENHNJBCBH; // 0x48
		::System::String* MBLKGJMPGKC; // 0x50
		::NGGLPLKJKMM* DPHAELOEHBM; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BDDGJOHPLFB; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FCGKIDGCMEN; // 0x68
		::RPG::GameCore::FateRinCardCasterSource JHBCCLOFBEN; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMEHCIFHDH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JLMEHCIFHDH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JLMEHCIFHDH*))((::PBYTE)hIl2Cpp + JLMEHCIFHDH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

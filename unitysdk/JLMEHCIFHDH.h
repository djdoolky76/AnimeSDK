#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class JLMEHCIFHDH;
class NGGLPLKJKMM;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define JLMEHCIFHDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D047460)
#define JLMEHCIFHDH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D047040)

inline static constexpr unsigned int JLMEHCIFHDH_TypeDefinitionIndex = 18155;

	class JLMEHCIFHDH : public ::RPG::GameCore::JsonConfig
	{
	public:
		::NGGLPLKJKMM* CIDPKCICEBG; // 0x10
		::NGGLPLKJKMM* FIENHNJBCBH; // 0x18
		::System::String* DJGEFBEJKHL; // 0x20
		::System::String* MBLKGJMPGKC; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* MFHALOHAMNO; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* IHGPLICHDLA; // 0x38
		::NGGLPLKJKMM* DPHAELOEHBM; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* KNFAIEMEFAI; // 0x48
		::NGGLPLKJKMM* PNMCPEEAOMK; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BDDGJOHPLFB; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FCGKIDGCMEN; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* GFDOFDMBDAB; // 0x68
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

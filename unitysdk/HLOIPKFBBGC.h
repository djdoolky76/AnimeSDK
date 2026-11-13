#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
#include "unitysdk/RPG/Client/GridFightTextSwitchConditionType.h"
#include "unitysdk/RPG/Client/GridFightTextSwitchDisplayType.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
namespace System { class String; }

#define HLOIPKFBBGC_CEMPMFFPPAH_OFFSET UNITYSDK_OFFSET(0x198B8D80)
#define HLOIPKFBBGC_COMPILE_OFFSET UNITYSDK_OFFSET(0x198B88A0)
#define HLOIPKFBBGC_CTOR_OFFSET UNITYSDK_OFFSET(0x198B91D0)
#define HLOIPKFBBGC_FNPDNLEKHDL_OFFSET UNITYSDK_OFFSET(0x198B8DF0)
#define HLOIPKFBBGC_GET_TAG_OFFSET UNITYSDK_OFFSET(0x198B8830)
#define HLOIPKFBBGC_HHPHIGBDDLC_OFFSET UNITYSDK_OFFSET(0x198B8E70)
#define HLOIPKFBBGC_KBCPFAHBDHD_OFFSET UNITYSDK_OFFSET(0x198B8B20)
#define HLOIPKFBBGC_MNPPPFMIDNL_OFFSET UNITYSDK_OFFSET(0x198B8C50)

inline static constexpr unsigned int HLOIPKFBBGC_TypeDefinitionIndex = 67063;

	class HLOIPKFBBGC : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		// static const ::System::String* NFJCLHFDLFN; // 0x0
		// static const ::System::String* EIDIHEFONDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOIPKFBBGC_CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOIPKFBBGC_GET_TAG_OFFSET))(this);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + HLOIPKFBBGC_COMPILE_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean KBCPFAHBDHD(::FMKEJLGKEMH* a1, ::RPG::Client::GridFightTextSwitchConditionType a2)
		{
			return ((::System::Boolean(*)(::FMKEJLGKEMH*, ::RPG::Client::GridFightTextSwitchConditionType))((::PBYTE)hIl2Cpp + HLOIPKFBBGC_KBCPFAHBDHD_OFFSET))(a1, a2);
		}

		static ::System::Boolean MNPPPFMIDNL(::FMKEJLGKEMH* a1, ::RPG::Client::GridFightTextSwitchDisplayType a2)
		{
			return ((::System::Boolean(*)(::FMKEJLGKEMH*, ::RPG::Client::GridFightTextSwitchDisplayType))((::PBYTE)hIl2Cpp + HLOIPKFBBGC_MNPPPFMIDNL_OFFSET))(a1, a2);
		}

		static ::System::Boolean CEMPMFFPPAH(::RPG::Client::GridFightTextSwitchConditionType a1, ::FMKEJLGKEMH* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightTextSwitchConditionType, ::FMKEJLGKEMH*, ::System::Boolean))((::PBYTE)hIl2Cpp + HLOIPKFBBGC_CEMPMFFPPAH_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HHPHIGBDDLC(::FMKEJLGKEMH* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::FMKEJLGKEMH*, ::System::Boolean))((::PBYTE)hIl2Cpp + HLOIPKFBBGC_HHPHIGBDDLC_OFFSET))(a1, a2);
		}

		static ::System::String* FNPDNLEKHDL(::System::Boolean a1)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HLOIPKFBBGC_FNPDNLEKHDL_OFFSET))(a1);
		}

	};

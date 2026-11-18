#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ImgTextParserBase.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define MOLEMOLE_IMGTEXTSKILLPARSER_DKGJGCMFEJK_OFFSET UNITYSDK_OFFSET(0x139EC5B0)
#define MOLEMOLE_IMGTEXTSKILLPARSER_LEMBBKGNBCD_OFFSET UNITYSDK_OFFSET(0x139EC7E0)
#define MOLEMOLE_IMGTEXTSKILLPARSER_NALHONEIFEO_OFFSET UNITYSDK_OFFSET(0x139EBDF0)
#define MOLEMOLE_IMGTEXTSKILLPARSER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x139EBDA0)
#define MOLEMOLE_IMGTEXTSKILLPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x139EC6D0)
#define MOLEMOLE_IMGTEXTSKILLPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x139EC670)

namespace MoleMole
{
	inline static constexpr unsigned int ImgTextSkillParser_TypeDefinitionIndex = 45399;

	class ImgTextSkillParser : public ::MoleMole::ImgTextParserBase
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_ACCICEJIPGB()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ImgTextSkillParser_TypeDefinitionIndex)->GetStaticField(0x44C30);
		}
		static ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::String*>>** StaticGet_ACDKKCINLON()
		{
			return (::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(ImgTextSkillParser_TypeDefinitionIndex)->GetStaticField(0x44C38);
		}
		::System::Int32 m_skillLevel; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTSKILLPARSER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTSKILLPARSER__CCTOR_OFFSET))();
		}

		::System::Void SetLevel(::System::Int32 MOBNMDEDJIP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTSKILLPARSER_SETLEVEL_OFFSET))(this, MOBNMDEDJIP);
		}

		::System::String* NALHONEIFEO(::System::String* FCCLIEJAKLI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTSKILLPARSER_NALHONEIFEO_OFFSET))(this, FCCLIEJAKLI);
		}

		::System::String* LEMBBKGNBCD(::System::String* MIALFKCCCPI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTSKILLPARSER_LEMBBKGNBCD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::String* DKGJGCMFEJK(::System::Int32 AMHFLBPBKLL, ::System::Int32 AELKMGGGEJP)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTSKILLPARSER_DKGJGCMFEJK_OFFSET))(this, AMHFLBPBKLL, AELKMGGGEJP);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingCore/Source/TracingTools/LogTagDefine_DisableLogTag.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingCore::Source::TracingTools { class LogTagDefine_LogTag; }

#define FBGCDIMGOOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x172631E0)

inline static constexpr unsigned int FBGCDIMGOOG_TypeDefinitionIndex = 63324;

class FBGCDIMGOOG : public ::System::Object
{
public:
	static ::BinaryTracingCore::Source::TracingTools::LogTagDefine_LogTag** StaticGet_DDJDAAPCDDM()
	{
		return (::BinaryTracingCore::Source::TracingTools::LogTagDefine_LogTag**)Il2CppClass::FromTypeDefinitionIndex(FBGCDIMGOOG_TypeDefinitionIndex)->GetStaticField(0x46AB0);
	}
	static ::BinaryTracingCore::Source::TracingTools::LogTagDefine_DisableLogTag* StaticGet_EOKMKPMDOKF()
	{
		return (::BinaryTracingCore::Source::TracingTools::LogTagDefine_DisableLogTag*)Il2CppClass::FromTypeDefinitionIndex(FBGCDIMGOOG_TypeDefinitionIndex)->GetStaticField(0x104F0);
	}
	static ::BinaryTracingCore::Source::TracingTools::LogTagDefine_DisableLogTag* StaticGet_EJLCGDDGIAN()
	{
		return (::BinaryTracingCore::Source::TracingTools::LogTagDefine_DisableLogTag*)Il2CppClass::FromTypeDefinitionIndex(FBGCDIMGOOG_TypeDefinitionIndex)->GetStaticField(0x104F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBGCDIMGOOG__CCTOR_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define KAMGNNGKPLJ_CBDMCJFPDKE_OFFSET UNITYSDK_OFFSET(0x155D75B0)
#define KAMGNNGKPLJ_HDFJGEOIOIO_OFFSET UNITYSDK_OFFSET(0x155D7520)

inline static constexpr unsigned int KAMGNNGKPLJ_TypeDefinitionIndex = 51541;

class KAMGNNGKPLJ : public ::System::Object
{
public:
	static ::FlatBuffers::ByteBuffer* HDFJGEOIOIO(::Il2CppArray<::System::Byte>* NODDDAEPKGO)
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KAMGNNGKPLJ_HDFJGEOIOIO_OFFSET))(NODDDAEPKGO);
	}

	static ::FlatBuffers::ByteBuffer* CBDMCJFPDKE(::System::String* CMFPFPJHDHJ)
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::System::String*))((::PBYTE)hIl2Cpp + KAMGNNGKPLJ_CBDMCJFPDKE_OFFSET))(CMFPFPJHDHJ);
	}
};
